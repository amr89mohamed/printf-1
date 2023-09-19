#include "main.h"

/**
 * print_from_to - print
 *
 * @start_spec: input
 * @stop: input
 * @except: input
 *
 * Return: length of printed bytes.
 */
int print_from_to(char *start_spec, char *stop, char *except)
{
int sum = 0;
while (start_spec <= stop)
{
if (start_spec != except)
{
sum += _putchar(*start_spec);
}
start_spec++;
}
return (sum);
}
