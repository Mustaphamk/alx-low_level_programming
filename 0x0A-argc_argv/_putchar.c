#include <unistd>

/**
 * _putchar - write the char c to stdout
 * @c: The char to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
