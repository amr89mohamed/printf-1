#include "main.h"

/**
 * get_specifier - gets function of printing the given specifier
 *
 * @c: the string form format
 *
 * Return: pointer to function.
 */
int (*get_specifier(char *c))(va_list args)
{
	spec_t specifiers[] = {
		{"c", print_ch},
		{"s", print_str},
		{"%", print_per},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}};
	int i = 0;

	while (specifiers[i].spec)
	{
		if (*c == specifiers[i].spec[0])
		{
			return (specifiers[i].fun);
		}
		i++;
	}
	return (NULL);
}

/**
 * get_print_fun - gets function of printing the given specifier
 *
 * @c: the string form format
 * @args: arguments
 *
 * Return: lenght of printed bytes
 */
int get_print_fun(char *c, va_list args)
{
	int (*fun)(va_list) = get_specifier(c);

	if (fun)
		return (fun(args));
	return (0);
}
