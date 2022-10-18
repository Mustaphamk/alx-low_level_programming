#include "main.h"

/**
 * _isalpha - check for alphabetic char
 * @c - The char to b checked is c
 *
 * Return: 1 if char is letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c => 'a' && c <= 'z') || (c => 'A' && <= 'Z'))
		return (0);
	else
		return (1);
}
