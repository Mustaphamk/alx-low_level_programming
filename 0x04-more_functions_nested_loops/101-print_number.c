#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input int parameter
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(65);
		i = -i;
	}
	if (i / 10)
	{
		printf_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
