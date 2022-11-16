#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised
 * to the power of y
 * @x: hgfxgk
 * @y: jhgfdsg
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0 && y > 0)
	{
		return (1);
	}
	else
	{
		return (y = x * _pow_recursion(x - 1, 1));
	}
}
