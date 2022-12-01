#include "main.h"

/**
 * _islower - Checks if  char is lower case
 * @c: The char to b check is c
 *
 * Return: 1 if the char is lower case, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
