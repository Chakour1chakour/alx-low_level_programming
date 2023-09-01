#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: pointer to the string
 * @accept: pointer to searched for string
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
