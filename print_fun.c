#include "main.h"

/**
 * print_ch - prints a character
 *
 * @args: pointer to args
 *
 * Return: no. of printed bytes.
 */
int print_ch(va_list args)
{
	int sum = 0;
	unsigned int c = va_arg(args, int);

	sum += _putchar(c);
	return (sum);
}
/**
 * print_str - prints a string
 *
 * @args: pointer to args
 *
 * Return: no. of printed bytes.
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	unsigned int sum = 0, len = 0, i;

	switch ((int)(!str))
	{
		case 1:
			str = NULL_STR;
	}
	len = _strlen(str);
	for (i = 0; i < len; i++)
		sum += _putchar(*str++);
	return (sum);
}
/**
 * print_per - prints "%"
 *
 * @args: pointer to args
 *
 * Return: no. of printed bytes.
 */
int print_per(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
/**
 * print_int - prints an integer
 *
 * @args: pointer to args
 *
 * Return: no. of printed bytes.
 */
int print_int(va_list args)
{
	int num;

	num = va_arg(args, int);
	return (print_number(num));
}
