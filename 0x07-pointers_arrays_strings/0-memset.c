#include "main.h"

/**
 * _memset - sets a specified value to a block of memory
 * @s: adress of memory to be filled
 * @b: value to fill
 * @n: the index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
