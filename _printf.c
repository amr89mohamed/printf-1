#include "main.h"

/**
 * _printf - prints anything
 *
 * @format: pointer to args
 *
 * Return: no. of printed bytes.
 */
int _printf(const char *format, ...)
{
	int sum = 0;
	va_list args;
	char *ptr, *start_spec;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = (char *)format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			sum += _putchar(*ptr);
			continue;
		}
		start_spec = ptr;
		ptr++;
		if (!get_specifier(ptr))
			sum += print_from_to(start_spec, ptr, 0);
		else
			sum += get_print_fun(ptr, args);
	}	
	va_end(args);
	return (sum);
}
