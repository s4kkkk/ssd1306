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
        uint16_t GetMaxLine(); // Метод получения максимального индекса строки (зависит от текущего масштаба)
        uint16_t GetMaxColumn(); // Метод получения максимального индекса колонки (символа) (зависит от текущего масштаба)
        
        
        FILE *fd; // Файловый поток через который можно выводить данные на дисплей

        ssd1306(uint32_t bitrate); // // Конструктор. Аргумент - скорость передачи по TWI
        ssd1306() = delete; // удаление стандартного конструктора

    private:
        uint16_t maxline;
        uint16_t maxcolumn;
        static int twi_putchar(char byte, FILE *fp); // метод передачи байта по TWI
};