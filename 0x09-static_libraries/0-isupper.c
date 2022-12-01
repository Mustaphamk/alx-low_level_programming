#include "main.h"

/**
 * _isupper - checks for upper case char
 * @c: char to b checked
 * Return: 1 if is upper case, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
