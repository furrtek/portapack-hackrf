/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 * Copyright (C) 2016 Furrtek
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#include "ui_navigation.hpp"

//#include "modules.h"

#include "portapack.hpp"
#include "event_m0.hpp"
#include "bmp_splash.hpp"
#include "bmp_modal_warning.hpp"
#include "portapack_persistent_memory.hpp"

#include "apps_inc.h"

#include "core_control.hpp"

#include "file.hpp"
#include "png_writer.hpp"

using portapack::receiver_model;
using portapack::transmitter_model;

namespace ui {

/* SystemStatusView ******************************************************/

SystemStatusView::SystemStatusView(
	NavigationView& nav
) : nav_ (nav)
{
	static constexpr Style style_systemstatus {
		.font = font::fixed_8x16,
		.background = Color::dark_grey(),
		.foreground = Color::white(),
	};
	
	add_children({
		&backdrop,
		&button_back,
		&title,
		&button_stealth,
		//&button_textentry,
		&button_camera,
		&button_sleep,
		&button_bias_tee,
		&image_clock_status,
		&sd_card_status_view,
	});
	
	button_back.id = -1;	// Special ID used by FocusManager
	title.set_style(&style_systemstatus);
	
	if (portapack::persistent_memory::stealth_mode())
		button_stealth.set_foreground(ui::Color::green());
	
	/*if (!portapack::persistent_memory::ui_config_textentry())
		button_textentry.set_bitmap(&bitmap_icon_keyboard);
	else
		button_textentry.set_bitmap(&bitmap_icon_unistroke);*/

	refresh();
	
	button_back.on_select = [this](ImageButton&){
		if (this->on_back)
			this->on_back();
	};
	
	button_stealth.on_select = [this](ImageButton&) {
		this->on_stealth();
	};
	
	button_bias_tee.on_select = [this](ImageButton&) {
		this->on_bias_tee();
	};
	
	/*button_textentry.on_select = [this](ImageButton&) {
		this->on_textentry();
	};*/

	button_camera.on_select = [this](ImageButton&) {
		this->on_camera();
	};

	button_sleep.on_select = [this](ImageButton&) {
		DisplaySleepMessage message;
		EventDispatcher::send_message(message);
	};
}

void SystemStatusView::refresh() {
	if (portapack::get_antenna_bias()) {
		button_bias_tee.set_bitmap(&bitmap_icon_biast_on);
		button_bias_tee.set_foreground(ui::Color::yellow());
	} else {
		button_bias_tee.set_bitmap(&bitmap_icon_biast_off);
		button_bias_tee.set_foreground(ui::Color::light_grey());
	}
	
	if (portapack::clock_manager.get_reference().source == ClockManager::ReferenceSource::External) {
		image_clock_status.set_bitmap(&bitmap_icon_clk_ext);
		button_bias_tee.set_foreground(ui::Color::green());
	} else {
		image_clock_status.set_bitmap(&bitmap_icon_clk_int);
		button_bias_tee.set_foreground(ui::Color::light_grey());
	}
	
	set_dirty();
}

void SystemStatusView::set_back_enabled(bool new_value) {
	button_back.set_foreground(new_value ? Color::white() : Color::dark_grey());
	button_back.set_focusable(new_value);
}

void SystemStatusView::set_title(const std::string new_value) {
	if( new_value.empty() ) {
		title.set(default_title);
	} else {
		title.set(new_value);
	}
}

void SystemStatusView::on_stealth() {
	bool mode = not portapack::persistent_memory::stealth_mode();
	
	portapack::persistent_memory::set_stealth_mode(mode);

	button_stealth.set_foreground(mode ? Color::green() : Color::light_grey());
}

void SystemStatusView::on_bias_tee() {
	if (!portapack::antenna_bias) {
		nav_.display_modal("Bias voltage", "Enable DC voltage on\nantenna connector ?", YESNO, [this](bool v) {
				if (v) {
					portapack::set_antenna_bias(true);
					//radio::set_antenna_bias(true);
					receiver_model.set_antenna_bias();
					transmitter_model.set_antenna_bias();
					refresh();
				}
			});
	} else {
		portapack::set_antenna_bias(false);
		//radio::set_antenna_bias(false);
		receiver_model.set_antenna_bias();
		transmitter_model.set_antenna_bias();
		refresh();
	}
}

/*void SystemStatusView::on_textentry() {
	uint8_t cfg;
	
	cfg = portapack::persistent_memory::ui_config_textentry();
	portapack::persistent_memory::set_config_textentry(cfg ^ 1);
	
	if (!cfg)
		button_textentry.set_bitmap(&bitmap_icon_unistroke);
	else
		button_textentry.set_bitmap(&bitmap_icon_keyboard);
}*/

void SystemStatusView::on_camera() {
	auto path = next_filename_stem_matching_pattern(u"SCR_????");
	if( path.empty() ) {
		return;
	}

	PNGWriter png;
	auto create_error = png.create(path.replace_extension(u".PNG"));
	if( create_error.is_valid() ) {
		return;
	}

	for(int i = 0; i < 320; i++) {
		std::array<ColorRGB888, 240> row;
		portapack::display.read_pixels({ 0, i, 240, 1 }, row);
		png.write_scanline(row);
	}
}

/* Navigation ************************************************************/

bool NavigationView::is_top() const {
	return view_stack.size() == 1;
}

View* NavigationView::push_view(std::unique_ptr<View> new_view) {
	free_view();

	const auto p = new_view.get();
	view_stack.emplace_back(std::move(new_view));

	update_view();

	return p;
}

void NavigationView::pop() {
	if( view() == modal_view ) {
		modal_view = nullptr;
	}

	// Can't pop last item from stack.
	if( view_stack.size() > 1 ) {
		free_view();

		view_stack.pop_back();

		update_view();
	}
}

void NavigationView::pop_modal() {
	if( view() == modal_view ) {
		modal_view = nullptr;
	}

	// Pop modal view + underlying app view
	if( view_stack.size() > 2 ) {
		free_view();
		view_stack.pop_back();
		free_view();
		view_stack.pop_back();

		update_view();
	}
}

void NavigationView::display_modal(
	const std::string& title,
	const std::string& message
) {
	display_modal(title, message, INFO, nullptr);
}

void NavigationView::display_modal(
	const std::string& title,
	const std::string& message,
	const modal_t type,
	const std::function<void(bool)> on_choice
) {
	/* If a modal view is already visible, don't display another */
	if( !modal_view ) {
		modal_view = push<ModalMessageView>(title, message, type, on_choice);
	}
}

void NavigationView::free_view() {
	remove_child(view());
}

void NavigationView::update_view() {
	const auto new_view = view_stack.back().get();
	
	add_child(new_view);
	new_view->set_parent_rect({ {0, 0}, size() });
	
	focus();
	set_dirty();

	if( on_view_changed ) {
		on_view_changed(*new_view);
	}
}

Widget* NavigationView::view() const {
	return children_.empty() ? nullptr : children_[0];
}

void NavigationView::focus() {
	if( view() ) {
		view()->focus();
	}
}

/* ReceiversMenuView *****************************************************/

ReceiversMenuView::ReceiversMenuView(NavigationView& nav) {
	add_items({
		//{ "..", 		ui::Color::light_grey(),&bitmap_icon_previous,	[&nav](){ nav.pop(); } },
#ifdef WITH_APP_RX_ADSB
		{ "ADS-B", 		ui::Color::green(),		&bitmap_icon_adsb,		[&nav](){ nav.push<ADSBRxView>(); }, },
#endif
#ifdef WITH_APP_RX_ACARS
		{ "ACARS", 		ui::Color::yellow(),	&bitmap_icon_adsb,		[&nav](){ nav.push<ACARSAppView>(); }, },
#endif
#ifdef WITH_APP_RX_AIS
		{ "AIS Boats",	ui::Color::green(),		&bitmap_icon_ais,		[&nav](){ nav.push<AISAppView>(); } },
#endif
#ifdef WITH_APP_RX_AFSK
		{ "AFSK", 		ui::Color::yellow(),	&bitmap_icon_receivers,	[&nav](){ nav.push<AFSKRxView>(); } },
#endif
#ifdef WITH_APP_RX_BTLE
		{ "BTLE",		ui::Color::yellow(),	&bitmap_icon_btle,		[&nav](){ nav.push<BTLERxView>(); } },
#endif
#ifdef WITH_APP_RX_NRF
		{ "NRF", 		ui::Color::yellow(),	&bitmap_icon_nrf,		[&nav](){ nav.push<NRFRxView>(); } },
#endif
#ifdef WITH_APP_RX_AUDIO
		{ "Audio", 		ui::Color::green(),		&bitmap_icon_speaker,	[&nav](){ nav.push<AnalogAudioView>(); } },
#endif
#ifdef WITH_APP_RX_ANALOGTV
		{ "Analog TV", 	ui::Color::yellow(),	&bitmap_icon_sstv,		[&nav](){ nav.push<AnalogTvView>(); } },
#endif
#ifdef WITH_APP_RX_ERT
		{ "ERT Meter", 	ui::Color::green(), 	&bitmap_icon_ert,		[&nav](){ nav.push<ERTAppView>(); } },
#endif
#ifdef WITH_APP_RX_POCSAG
		{ "POCSAG", 	ui::Color::green(),		&bitmap_icon_pocsag,	[&nav](){ nav.push<POCSAGAppView>(); } },
#endif
#ifdef WITH_APP_RX_RADIOSONDE
		{ "Radiosnde", 	ui::Color::yellow(),	&bitmap_icon_sonde,		[&nav](){ nav.push<SondeView>(); } },
#endif
#ifdef WITH_APP_RX_TPMS
		{ "TPMS Cars", 	ui::Color::green(),		&bitmap_icon_tpms,		[&nav](){ nav.push<TPMSAppView>(); } },
#endif
#ifdef WITH_APP_RX_APRS
		{ "APRS", 		ui::Color::dark_grey(),	&bitmap_icon_aprs,		[&nav](){ nav.push<NotImplementedView>(); } },
#endif
#ifdef WITH_APP_RX_DMR
		{ "DMR", 		ui::Color::dark_grey(),	&bitmap_icon_dmr,		[&nav](){ nav.push<NotImplementedView>(); } },
#endif
#ifdef WITH_APP_RX_SIGFOX
		{ "SIGFOX", 	ui::Color::dark_grey(),	&bitmap_icon_fox,		[&nav](){ nav.push<NotImplementedView>(); } }, // SIGFRXView
#endif
#ifdef WITH_APP_RX_LORA
		{ "LoRa", 		ui::Color::dark_grey(),	&bitmap_icon_lora,		[&nav](){ nav.push<NotImplementedView>(); } },
#endif
#ifdef WITH_APP_RX_SSTV
		{ "SSTV", 		ui::Color::dark_grey(), &bitmap_icon_sstv,		[&nav](){ nav.push<NotImplementedView>(); } },
#endif
#ifdef WITH_APP_RX_TETRA
		{ "TETRA", 		ui::Color::dark_grey(),	&bitmap_icon_tetra,		[&nav](){ nav.push<NotImplementedView>(); } },
#endif
	});
	
	set_highlighted(6);		// Default selection is "Audio"
}

/* TransmittersMenuView **************************************************/

TransmittersMenuView::TransmittersMenuView(NavigationView& nav) {
	add_items({
		//{ "..",			ui::Color::light_grey(),&bitmap_icon_previous,	[&nav](){ nav.pop(); } },
#ifdef WITH_APP_TX_ADSB
		{ "ADS-B [S]",		ui::Color::yellow(), 	&bitmap_icon_adsb,		[&nav](){ nav.push<ADSBTxView>(); } },
#endif
#ifdef WITH_APP_TX_APRS
		{ "APRS", 			ui::Color::orange(),	&bitmap_icon_aprs,		[&nav](){ nav.push<APRSTXView>(); } },
#endif
#ifdef WITH_APP_TX_BHT
		{ "BHT Xy/EP", 		ui::Color::green(), 	&bitmap_icon_bht,		[&nav](){ nav.push<BHTView>(); } },
#endif
#ifdef WITH_APP_TX_JAMMER
		{ "Jammer", 		ui::Color::yellow(),	&bitmap_icon_jammer,	[&nav](){ nav.push<JammerView>(); } },
#endif
#ifdef WITH_APP_TX_KEYFOB
		{ "Key fob", 		ui::Color::orange(),	&bitmap_icon_keyfob,	[&nav](){ nav.push<KeyfobView>(); } },
#endif
#ifdef WITH_APP_TX_LGE
		{ "LGE tool", 		ui::Color::yellow(),	&bitmap_icon_lge,		[&nav](){ nav.push<LGEView>(); } },
#endif
#ifdef WITH_APP_TX_MIC
		{ "Mic",			ui::Color::green(),		&bitmap_icon_microphone,[&nav](){ nav.push<MicTXView>(); } },
#endif
#ifdef WITH_APP_TX_MORSE
		{ "Morse",			ui::Color::green(),		&bitmap_icon_morse,		[&nav](){ nav.push<MorseView>(); } },
#endif
#ifdef WITH_APP_TX_BURGERPAGER
		{ "BurgerPgr",		ui::Color::yellow(), 	&bitmap_icon_burger,	[&nav](){ nav.push<CoasterPagerView>(); } },
#endif
#ifdef WITH_APP_TX_NUOPTIX
		{ "Nuoptix", 		ui::Color::green(),		&bitmap_icon_nuoptix,	[&nav](){ nav.push<NuoptixView>(); } },
#endif
#ifdef WITH_APP_TX_OOK
		{ "OOK",			ui::Color::yellow(),	&bitmap_icon_remote,	[&nav](){ nav.push<EncodersView>(); } },
#endif
#ifdef WITH_APP_TX_POCSAG
		{ "POCSAG", 		ui::Color::green(),		&bitmap_icon_pocsag,	[&nav](){ nav.push<POCSAGTXView>(); } },
#endif
#ifdef WITH_APP_TX_RDS
		{ "RDS",			ui::Color::green(),		&bitmap_icon_rds,		[&nav](){ nav.push<RDSView>(); } },
#endif
#ifdef WITH_APP_TX_SOUNDBOARD
		{ "Soundbrd",		ui::Color::green(), 	&bitmap_icon_soundboard,[&nav](){ nav.push<SoundBoardView>(); } },
#endif
#ifdef WITH_APP_TX_SSTV
		{ "SSTV", 			ui::Color::green(), 	&bitmap_icon_sstv,		[&nav](){ nav.push<SSTVTXView>(); } },
#endif
#ifdef WITH_APP_TX_LCR
		{ "TEDI/LCR",		ui::Color::yellow(), 	&bitmap_icon_lcr,		[&nav](){ nav.push<LCRView>(); } },
#endif
#ifdef WITH_APP_TX_TOUCHETUNE
		{ "TouchTune",		ui::Color::yellow(),	&bitmap_icon_remote,	[&nav](){ nav.push<TouchTunesView>(); } },
#endif
#ifdef WITH_APP_TX_REMOTE
		{ "Remote",			ui::Color::dark_grey(),	&bitmap_icon_remote,	[&nav](){ nav.push<RemoteView>(); } },
#endif
#ifdef WITH_APP_TX_NUMBERS
		{ "Numbers",		ui::Color::orange(),	nullptr,	[&nav](){ nav.push<NumbersStationView>(); } },
#endif
	});
}

/* UtilitiesMenuView *****************************************************/

UtilitiesMenuView::UtilitiesMenuView(NavigationView& nav) {
	add_items({
		//{ "..", 			ui::Color::light_grey(),&bitmap_icon_previous,	[&nav](){ nav.pop(); } },
#ifdef WITH_APP_TEST
		{ "Test app", 		ui::Color::dark_grey(),	nullptr,				[&nav](){ nav.push<TestView>(); } },
#endif
		{ "Freq manager",	ui::Color::green(), 	&bitmap_icon_freqman,	[&nav](){ nav.push<FrequencyManagerView>(); } },
		{ "File manager", 			ui::Color::yellow(),	&bitmap_icon_file,		[&nav](){ nav.push<FileManagerView>(); } },
		{ "Notepad",		ui::Color::dark_grey(),	&bitmap_icon_notepad,	[&nav](){ nav.push<NotImplementedView>(); } },
#ifdef WITH_APP_SIGGEN
		{ "Signal gen", 	ui::Color::green(), 	&bitmap_icon_cwgen,		[&nav](){ nav.push<SigGenView>(); } },
#endif
#ifdef WITH_APP_TONESEARCH
		{ "Tone search",	ui::Color::dark_grey(), nullptr,				[&nav](){ nav.push<ToneSearchView>(); } },
#endif
		{ "Wave viewer",	ui::Color::blue(),		nullptr,				[&nav](){ nav.push<ViewWavView>(); } },
		{ "Antenna length",	ui::Color::yellow(),	nullptr,				[&nav](){ nav.push<WhipCalcView>(); } },
		{ "Wipe SD card",			ui::Color::red(),		nullptr,				[&nav](){ nav.push<WipeSDView>(); } },
	});
	set_max_rows(2); // allow wider buttons
}

/* SystemMenuView ********************************************************/

void SystemMenuView::hackrf_mode(NavigationView& nav) {
	nav.push<ModalMessageView>("Confirm", "Switch to HackRF mode ?", YESNO,
		[this](bool choice) {
			if (choice) {
				EventDispatcher::request_stop();
			}
		}
	);
}

SystemMenuView::SystemMenuView(NavigationView& nav) {
	add_items({
		{ "Play dead",				ui::Color::red(),		&bitmap_icon_playdead,	[&nav](){ nav.push<PlayDeadView>(); } },
		{ "Receivers", 	ui::Color::dark_cyan(),		&bitmap_icon_receivers,	[&nav](){ nav.push<ReceiversMenuView>(); } },
		{ "Transmit", 	ui::Color::green(),			&bitmap_icon_transmit,	[&nav](){ nav.push<TransmittersMenuView>(); } },
		{ "Capture",				ui::Color::blue(),		&bitmap_icon_capture,	[&nav](){ nav.push<CaptureAppView>(); } },
		{ "Replay",					ui::Color::purple(),	&bitmap_icon_replay,	[&nav](){ nav.push<ReplayAppView>(); } },
		{ "Calls",		ui::Color::yellow(),	    &bitmap_icon_closecall,	[&nav](){ nav.push<SearchView>(); } },
		{ "Scanner",	ui::Color::orange(),		&bitmap_icon_scanner,	[&nav](){ nav.push<ScannerView>(); } },
		{ "Utilities",				ui::Color::light_grey(),	&bitmap_icon_utilities,	[&nav](){ nav.push<UtilitiesMenuView>(); } },
		{ "Settings", 	ui::Color::cyan(),			&bitmap_icon_setup,	  	[&nav](){ nav.push<SettingsMenuView>(); } },
#ifdef WITH_APP_DEBUG
		{ "Debug",		ui::Color::cyan(),			nullptr,   				[&nav](){ nav.push<DebugMenuView>(); } },
#endif
		{ "HackRF", 	ui::Color::cyan(),			&bitmap_icon_hackrf,	[this, &nav](){ hackrf_mode(nav); } },
		{ "About", 		ui::Color::cyan(),			nullptr,				[&nav](){ nav.push<AboutView>(); } }
	});
	
	set_highlighted(1);		// Startup selection is "Receivers"
}

/* SystemView ************************************************************/

static constexpr ui::Style style_default {
	.font = ui::font::fixed_8x16,
	.background = ui::Color::black(),
	.foreground = ui::Color::white()
};

SystemView::SystemView(
	Context& context,
	const Rect parent_rect
) : View { parent_rect },
	context_(context)
{
	set_style(&style_default);

	constexpr ui::Dim status_view_height = 16;
	
	add_child(&status_view);
	status_view.set_parent_rect({
		{ 0, 0 },
		{ parent_rect.width(), status_view_height }
	});
	status_view.on_back = [this]() {
		this->navigation_view.pop();
	};

	add_child(&navigation_view);
	navigation_view.set_parent_rect({
		{ 0, status_view_height },
		{ parent_rect.width(), static_cast<ui::Dim>(parent_rect.height() - status_view_height) }
	});
	navigation_view.on_view_changed = [this](const View& new_view) {
		this->status_view.set_back_enabled(!this->navigation_view.is_top());
		this->status_view.set_title(new_view.title());
	};

	// portapack::persistent_memory::set_playdead_sequence(0x8D1);
				
	// Initial view
	/*if ((portapack::persistent_memory::playing_dead() == 0x5920C1DF) ||		// Enable code
		(portapack::persistent_memory::ui_config() & 16)) {					// Login option
		navigation_view.push<PlayDeadView>();
	} else {*/
	
		navigation_view.push<SystemMenuView>();
		
		if (portapack::persistent_memory::config_splash())
			navigation_view.push<BMPView>();
		//else
		//	navigation_view.push<SystemMenuView>();
			
	//}
}

Context& SystemView::context() const {
	return context_;
}

/* ***********************************************************************/

void BMPView::focus() {
	button_done.focus();
}

BMPView::BMPView(NavigationView& nav) {
	add_children({
		&text_info,
		&button_done
	});
	
	button_done.on_select = [this, &nav](Button&){
		nav.pop();
	};
}

void BMPView::paint(Painter&) {
	portapack::display.drawBMP({(240 - 185) / 2, 0}, splash_bmp, false);
}

/* NotImplementedView ****************************************************/

NotImplementedView::NotImplementedView(NavigationView& nav) {
	button_done.on_select = [&nav](Button&){
		nav.pop();
	};

	add_children({
		&text_title,
		&button_done,
	});
}

void NotImplementedView::focus() {
	button_done.focus();
}

/* ModalMessageView ******************************************************/

ModalMessageView::ModalMessageView(
	NavigationView& nav,
	const std::string& title,
	const std::string& message,
	const modal_t type,
	const std::function<void(bool)> on_choice
) : title_ { title },
	message_ { message },
	type_ { type },
	on_choice_ { on_choice }
{
	if (type == INFO) {
		add_child(&button_ok);
		
		button_ok.on_select = [&nav](Button&){
			nav.pop();
		};
	} else if (type == YESNO) {
		add_children({
			&button_yes,
			&button_no
		});
		
		button_yes.on_select = [this, &nav](Button&){
			if (on_choice_) on_choice_(true);
			nav.pop();
		};
		button_no.on_select = [this, &nav](Button&){
			if (on_choice_) on_choice_(false);
			nav.pop();
		};
	} else if (type == YESCANCEL) {
		add_children({
			&button_yes,
			&button_no
		});
		
		button_yes.on_select = [this, &nav](Button&){
			if (on_choice_) on_choice_(true);
			nav.pop();
		};
		button_no.on_select = [this, &nav](Button&){
			//if (on_choice_) on_choice_(false);
			nav.pop_modal();
		};
	} else {	// ABORT
		add_child(&button_ok);
		
		button_ok.on_select = [this, &nav](Button&){
			if (on_choice_) on_choice_(true);
			nav.pop_modal();
		};
	}
}

void ModalMessageView::paint(Painter& painter) {
	size_t pos, i = 0, start = 0;
	
	portapack::display.drawBMP({ 100, 48 }, modal_warning_bmp, false);
	
	// Terrible...
	while ((pos = message_.find("\n", start)) != std::string::npos) {
		painter.draw_string(
			{ 1 * 8, (Coord)(120 + (i * 16)) },
			style(),
			message_.substr(start, pos - start)
		);
		i++;
		start = pos + 1;
	}
	painter.draw_string(
		{ 1 * 8, (Coord)(120 + (i * 16)) },
		style(),
		message_.substr(start, pos)
	);
}

void ModalMessageView::focus() {
	if ((type_ == YESNO) || (type_ == YESCANCEL)) {
		button_yes.focus();
	} else {
		button_ok.focus();
	}
}

} /* namespace ui */
