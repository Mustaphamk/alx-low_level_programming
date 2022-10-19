#include "main.h"

/**
 * print_last_digit - Print the last digit
 * @m: The num in qs
 *
 * Return: Value of the last digit
 */
int print_last_digit(int m)
{
	int last_digit = m % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
