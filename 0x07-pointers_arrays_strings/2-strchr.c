#include "main.h"

/**
 * _strchr - find a char in a string
 * @s: char pointer
 * @c: char param
 * Return: *s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}

	s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
