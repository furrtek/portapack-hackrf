#
# Copyright (C) 2014 Jared Boone, ShareBrained Technology, Inc.
# Copyright (C) 2016 Furrtek
#
# This file is part of PortaPack.
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; see the file COPYING.  If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street,
# Boston, MA 02110-1301, USA.
#

############
## NOTICE ##
############

# Enable an app only if you have a clue about what you are doing.
# Some apps may RX/TX with the pre-amp ON by default and/or tuned to a predefined frequency. May result in hardware damage/failure when using unmatched antenna.

##################################
## Enable/Disable Receiver apps ##
##################################

# Finished state (green color)
SET(USE_APP_RX_ADSB yes)
SET(USE_APP_RX_AIS yes)
SET(USE_APP_RX_AUDIO yes)
SET(USE_APP_RX_ERT yes)
SET(USE_APP_RX_POCSAG yes)
SET(USE_APP_RX_TPMS yes)

# Partial state (yellow color)
SET(USE_APP_RX_ACARS yes)
SET(USE_APP_RX_AFSK yes)
SET(USE_APP_RX_BTLE yes)
SET(USE_APP_RX_NRF yes)
SET(USE_APP_RX_ANALOGTV yes)
SET(USE_APP_RX_RADIOSONDE yes)

# Debug state (orange color)

# Not implemented state (grey color)
SET(USE_APP_RX_APRS no)
SET(USE_APP_RX_DMR no)
SET(USE_APP_RX_SIGFOX no)
SET(USE_APP_RX_LORA no)
SET(USE_APP_RX_SSTV no)
SET(USE_APP_RX_TETRA no)

#####################################
## Enable/Disable Transmitter apps ##
#####################################

# Finished state (green color)
SET(USE_APP_TX_MIC yes)
SET(USE_APP_TX_BHT yes)
SET(USE_APP_TX_POCSAG yes)
SET(USE_APP_TX_SSTV yes)
SET(USE_APP_TX_RDS yes)
SET(USE_APP_TX_SOUNDBOARD yes)
SET(USE_APP_TX_NUOPTIX no)

# Partial state (yellow color)
SET(USE_APP_TX_ADSB yes)
SET(USE_APP_TX_JAMMER yes)
SET(USE_APP_TX_LGE yes)
SET(USE_APP_TX_MORSE yes)
SET(USE_APP_TX_BURGERPAGER yes)
SET(USE_APP_TX_OOK yes)
SET(USE_APP_TX_LCR yes)
SET(USE_APP_TX_TOUCHETUNE yes)

# Debug state (orange color)
SET(USE_APP_TX_APRS yes)
SET(USE_APP_TX_KEYFOB yes)

# Not implemented state (grey color)
SET(USE_APP_TX_REMOTE no)

# Seems deprectaed. Won't compile. Need to be fixed.
SET(USE_APP_TX_NUMBERS no)

#####################################
##    Enable/Disable other apps    ##
#####################################

SET(USE_APP_TONESEARCH no)
SET(USE_APP_DEBUG no)
SET(USE_APP_TEST no)
