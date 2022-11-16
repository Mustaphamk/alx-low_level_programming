#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int c = 0;

	/*if (n > 1)
	{
		return (1);
	}*/
	if (n + 1)
	{
		return (n = c * _sqrt_recursion(c));
	}
	/*else if (n < 1)
	{
		return (-1);
	}*/
	else
		return (-1);
}
