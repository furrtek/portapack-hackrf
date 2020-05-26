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

/*
 * NOTICE
 * Header file for apps to be displayed by ui_naviguation
 * Don't forget to add the proper preprocessor logic
 */


   ////////////////////
  // Receiving apps //
 ////////////////////
#ifdef WITH_APP_RX_ADSB
#include "ui_adsb_rx.hpp"
#endif
#ifdef WITH_APP_RX_ACARS
#include "acars_app.hpp"
#endif
#ifdef WITH_APP_RX_BTLE
#include "ui_btle_rx.hpp"
#endif
#ifdef WITH_APP_RX_NRF
#include "ui_nrf_rx.hpp"
#endif
#ifdef WITH_APP_RX_RADIOSONDE
#include "ui_sonde.hpp"
#endif
#ifdef WITH_APP_RX_AUDIO
#include "analog_audio_app.hpp"
#endif
#ifdef WITH_APP_RX_TPMS
#include "tpms_app.hpp"
#endif
#ifdef WITH_APP_RX_POCSAG
#include "pocsag_app.hpp"
#endif
#ifdef WITH_APP_RX_AFSK
#include "ui_afsk_rx.hpp"
#endif
#ifdef WITH_APP_RX_AIS
#include "ais_app.hpp"
#endif
#ifdef WITH_APP_RX_ANALOGTV
#include "analog_tv_app.hpp"
#endif
#ifdef WITH_APP_RX_ERT
#include "ert_app.hpp"
#endif


   ///////////////////////
  // Transmitting apps //
 ///////////////////////
#ifdef WITH_APP_TX_OOK
#include "ui_encoders.hpp"
#endif
#ifdef WITH_APP_TX_JAMMER
#include "ui_jammer.hpp"
#endif
#ifdef WITH_APP_TX_KEYFOB
#include "ui_keyfob.hpp"
#endif
#ifdef WITH_APP_TX_LCR
#include "ui_lcr.hpp"
#endif
#ifdef WITH_APP_TX_MIC
#include "ui_mictx.hpp"
#endif
#ifdef WITH_APP_TX_SSTV
#include "ui_sstvtx.hpp"
#endif
#ifdef WITH_APP_TX_TOUCHETUNE
#include "ui_touchtunes.hpp"
#endif
#ifdef WITH_APP_TX_ADSB
#include "ui_adsb_tx.hpp"
#endif
#ifdef WITH_APP_TX_APRS
#include "ui_aprs_tx.hpp"
#endif
#ifdef WITH_APP_TX_BHT
#include "ui_bht_tx.hpp"
#endif
#ifdef WITH_APP_TX_BURGERPAGER
#include "ui_coasterp.hpp"
#endif
#ifdef WITH_APP_TX_MORSE
#include "ui_morse.hpp"
#endif
#ifdef WITH_APP_TX_NUOPTIX
#include "ui_nuoptix.hpp"
#endif
#ifdef WITH_APP_TX_POCSAG
#include "ui_pocsag_tx.hpp"
#endif
#ifdef WITH_APP_TX_RDS
#include "ui_rds.hpp"
#endif
#ifdef WITH_APP_TX_REMOTE
#include "ui_remote.hpp"
#endif
#ifdef WITH_APP_TX_LGE
#include "lge_app.hpp"
#endif
#ifdef WITH_APP_TX_SOUNDBOARD
#include "soundboard_app.hpp"
#endif
#ifdef WITH_APP_TX_NUMBERS
#include "ui_numbers.hpp"
#endif

   ///////////////
  // Main apps //
 ///////////////
#include "ui_about.hpp"
#include "ui_settings.hpp"
#include "ui_scanner.hpp"
#include "ui_search.hpp"
#include "ui_playdead.hpp"
#include "capture_app.hpp"
#include "replay_app.hpp"

#ifdef WITH_APP_DEBUG
#include "ui_debug.hpp"
#endif

   //////////////////
  // Utility apps //
 //////////////////
#include "ui_sd_wipe.hpp"
#include "ui_fileman.hpp"
#include "ui_freqman.hpp"
#include "ui_view_wav.hpp"
#include "ui_whipcalc.hpp"
#include "ui_siggen.hpp"

#ifdef WITH_APP_TONESEARCH
#include "ui_tone_search.hpp"
#endif
#ifdef WITH_APP_TEST
#include "ui_test.hpp"
#endif
