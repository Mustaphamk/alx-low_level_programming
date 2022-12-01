#include "main.h"
#include <string.h>

/**
 * _strchr - a function that locates a character in a string.
 * @c: occurrance of the char
 * @s: in the string
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{

		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
