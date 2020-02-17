/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * MKS Robin nano (STM32F130VET6) board pin assignments
 */
#include "pins_MKS_ROBIN_NANO.h"

#ifndef Z_MAX_PIN
  #define Z_MAX_PIN   PC4
#endif
#ifndef E1_STEP_PIN
  #define E1_STEP_PIN PA6
#endif
#ifndef E1_DIR_PIN
  #define E1_DIR_PIN PA1
#endif
#ifndef E1_ENABLE_PIN
  #define E1_ENABLE_PIN PA3
#endif

//#undef PS_ON_PIN
//#define PS_ON_PIN          PB2   // PA3 PW_OFF
#undef LED_PIN       //  PS_ON_PIN
#define SUICIDE_PIN PB2
#define KILL_PIN PA2
#define KILL_PIN_INVERTING true