#include "main.h"

/**
 * print_line - print staight line on the terminal with '_' n times
 * @n: number of times _ is printed
 */

void print_line(int n)
{

	int line = n;

	for (line = n; line > 0; line--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
