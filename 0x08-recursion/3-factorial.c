#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: the given num
 * Return: -1 to indicate error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
		factorial(n) = n * factorial(n - 1);
	}
	else
		return (1);
}
