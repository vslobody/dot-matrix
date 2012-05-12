/*
	FONT_0703.h
	Basic ASCII visible Font of 7x4 Dot Matrix
	library for Arduino to drive LED Dot Matrix Display dirven by 74HC595(column) and 74HC138(row)

	Created on: 2012-4-18
	Updated on: 2012-4-18
	Author: Weihong Guan
	Blog: http://aguegu.net
	E-mail: weihong.guan@gmail.com
	Code license: Attribution-NonCommercial-ShareAlike 3.0 Unported (CC BY-NC-SA 3.0)
	http://creativecommons.org/licenses/by-nc-sa/3.0/

	source hosting: http://code.google.com/p/aguegu-arduino-library/
 */
#ifndef FONT_0703_H_
#define FONT_0703_H_

#include <avr/pgmspace.h>

extern prog_uint8_t FONT_0703_WIDTH[] PROGMEM;
extern prog_uint8_t FONT_0703_HEIGHT[] PROGMEM;
extern prog_uint8_t FONT_0703[] PROGMEM;

#endif /* FONT_0703_H_ */