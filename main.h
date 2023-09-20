#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define NULL_STR "(null)"

/**
 * struct spec - string specifiers
 *
 * @spec: specifier character
 * @fun: pointer to its printing function
 *
 */
typedef struct spec
{
	char *spec;
	int (*fun)(va_list);
} spec_t;

/*_puts.c*/
int _putchar(char c);
int _puts(char *str);

/*print_fun.c*/
int print_ch(va_list args);
int print_str(va_list args);
int print_per(va_list args);
int print_int(va_list args);

/*spec.c*/
int (*get_specifier(char *c))(va_list args);
int get_print_fun(char *c, va_list args);

/*printers.c*/
int print_from_to(char *start_spec, char *stop, char *except);

/*utilities.c*/
int _strlen(char *s);
int print_number(int n);

/*_printf.c*/
int _printf(const char *format, ...);

#endif
