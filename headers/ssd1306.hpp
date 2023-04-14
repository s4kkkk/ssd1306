#include "../interfaces/Issd1306.hpp"

#ifndef COMMON_HEADERS
#define COMMON_HEADERS
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#endif

class ssd1306: public Issd1306
{   
    public:
        uint16_t line; // индекс строки
        uint16_t column; // индекс колонки(символа)
        FILE *fd; // файловый поток через который записываются данные на дисплей

        ssd1306(uint32_t bitrate); // ко
        ssd1306() = delete; // удаление стандартного конструктора

    private:
        int twi_init(uint32_t bitrate); // инициализация TWI
        static int twi_putchar(char byte, FILE *fp); // метод передачи байта по TWI
};