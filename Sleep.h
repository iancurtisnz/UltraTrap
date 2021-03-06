#ifndef SLEEP_H
#define SLEEP_H

/* Sleep
 * -----------------
 * Example code to demonstrate the sleep functions in a Arduino. Arduino will wake up
 * when new data is received in the serial port USART
 * Based on Sleep Demo Serial from http://www.arduino.cc/playground/Learning/ArduinoSleepCode 
 *
 * Copyright (C) 2006 MacSimski 2006-12-30 
 * Copyright (C) 2007 D. Cuartielles 2007-07-08 - Mexico DF
 * 
 *  With modifications from Ruben Laguna  2008-10-15
 * 
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 * 
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 * 
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *  
 *  Modified by Ian Curtis 3-1-2014
 */

#include "Arduino.h"
#include <avr/sleep.h>
#include <avr/power.h>

//Puts Board into low power sleep mode.
void sleepNow();

#endif //SLEEP_H
