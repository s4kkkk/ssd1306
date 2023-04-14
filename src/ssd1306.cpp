#include "../headers/ssd1306.hpp"

#ifndef COMMON_HEADERS
#define COMMON_HEADERS
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#endif

uint16_t ssd1306::GetMaxLine()
{
    return maxline;
}

uint16_t ssd1306::GetMaxColumn()
{
    return maxcolumn;
}

ssd1306::ssd1306(uint32_t bitrate)
{
    //инициализация TWI и ssd1306 модуля
}