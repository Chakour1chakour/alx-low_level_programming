#include "main.h"
#define NULL 0

/**
 * _strstr - find substring
 * @haystack: where to look
 * @needle: to find
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, m;

	while (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			m = i;
			j = 0;

			while (needle[j] != '\0')
			{
				if (haystack[m] == needle[j])
				{
					m++;
					j++;
				}
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
