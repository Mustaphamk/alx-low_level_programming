#include <stdio.h>

/**
 * main - count the num of arg passed unto
 * @argc: int
 * @argv: char
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
