#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @n: the bytes that is copied
 * @src: where the bytes is copied
 * @dest: memory area where the bytes is copied to
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
