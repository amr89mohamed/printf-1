#include "main.h"

/**
 * _strlen - calcualtes the length of a string.
 *
 * @s: pointer to int
 *
 * Return: returns the length of a string as integer.
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
/**
 * print_number - prints a number using _putcahr only
 *
 * @n: no. input for fn
 *
 * Return: length of printed bytes
 */
int print_number(int n)
{
unsigned int num, sum = 0;
if (n < 0)
{
num = -n;
sum += _putchar('-');
}
else
{
num = n;
}
if ((num / 10) > 0)
sum += print_number(num / 10);
sum += _putchar((num % 10) + '0');
return (sum);
}
