/*
TestPins_1_2_debug.h - Definition of variables for enabling Debug using TEST_1/2 pins

  Copyright (c) 2026 Gomez Costa J.L.

  This is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  If not, see <http://www.gnu.org/licenses/>.
*/

// Definitions for using Test1[2] pins
//  If Not defined
//    NORMAL
//    	TEST1[2] pin is NOT used
//    	COOLANT[PROBE] pin IS defined
//
//  If defined
//    TEST_xx
//    	TEST1[2] pin IS used
//    	COOLANT[PROBE] pin IS NOT defined
//
#include <Arduino.h>

#define DEBUG_TEST_1 YES		// comment out for standard operation
#define DEBUG_TEST_2 YES		// comment out for standard operation

//--------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------
#ifdef MAIN_FILE

// Memories only defined on Main
    #define MAIN_FILE_DEBUG

#else

    #define MAIN_FILE_DEBUG extern

#endif

MAIN_FILE_DEBUG uint8_t  debug_uint8_1;
MAIN_FILE_DEBUG uint16_t  debug_uint16_1;
MAIN_FILE_DEBUG uint32_t  debug_uint32_1;
