#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the largest prime factor of the number 612852475143,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i++)
	{
		while ((n % i == 0) && (n != 1))
			n = n/ i;
	}
	printf("%lu\n", n);
	return (0);
}
