#include "main.h"

/**
 * _isupper - checks fir uppercase character
 * @c: the character to check
 * Return: 1 if true and 0 if false
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
