#include "main.h"

/**
 * print_number - print any int with putchar
 * @n: int to print
 *
 * Return: 0
 */
void print_number(int n)
{
	unsigned int x;

	if (x < 0)
	{
		_putchar((x % 10) + '0');
		n++
	}

	n = x;

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
