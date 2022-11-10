#include "main.h"

/**
 * _print_rev_recursion - reverse a string
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int i = 0, lenght = 1, temp;

	if (i < lenght / 2)
	{
		temp = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = temp;
		i++;

		_print_rev_recursion(s);
	}
}
