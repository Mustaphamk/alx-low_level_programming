#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: char to b check
 * Return: void
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;
	while (s[b] != '\n')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
