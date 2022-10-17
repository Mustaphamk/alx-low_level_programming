#include <stdio.h>

/**
 * main - DoHardThings
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 100)
	{
		j = (i / 10) % 10; /*tens*/
		k = i / 100; /*unit*/
		if (j < k)
		{
			putchar(j + '0');
			putchar(k + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
