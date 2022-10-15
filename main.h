#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_bin(va_list val);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_hex_aux(unsigned long int num);
int printf_hex(va_list val);
int printf_string(va_list val);
int printf_char(va_list val);
int printf_37(void);
int printf_exc_string(va_list val);
int printf_HEX(va_list val);
int printf_HEX_aux(unsigned int num);
