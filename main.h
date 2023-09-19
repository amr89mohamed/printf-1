#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct spec
{
	char *spec;
	int (*fun) (va_list, params_t *);
}spec_t;

int _puts(char *str);
int _putchar(int c);

int print_ch(va_list args, );
int print_str(va_list args, );
int print_per(va_list args, );
int print_int(va_list args, );

int _printf(const char *format, ...);

#endif
