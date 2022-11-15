#include "main.h"

/**
 * factorial -  a function that returns the factorial of a given number.
 * @n: the given num
 * Return: -1 to indicate error
 */
int factorial(int n)
{
	int a = 0;


	if (n < a)
	{
		return (-1);
		/*return (n = n * factorial(n - 1));*/
	}
	else if (n == a)
	{
		return (0);
		return (n = n * factorial(n - 1));
	}
	else
		/*return (1);*/
		return (n = n * factorial(n - 1));
}
