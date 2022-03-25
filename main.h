#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* Funciones auxiliares */

int _putchar(char c);

/* Funciones para imprimir */

int _printf(const char *format, ...);
int print_string(va_list arg);
int print_char(va_list arg);
int print_int(va_list arg);

#endif
