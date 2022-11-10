#include "main.h"

/**
 * _print_rev_recursion - reverse a string
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int i, lenght, temp;

	if (i < lenght / 2)
	{
		temp = s[i];
		s[i] = s[lenght - i - 1];
		s[lenght - i - 1] = temp;
		i++;

		_print_rev_recursion(s);
	}
}
