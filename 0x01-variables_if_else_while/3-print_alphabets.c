#include <stdio.h>

/**
 * main - Prints lowercase letters from 'a' to 'z'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char LETTER = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (LETTER <= 'Z')
	{
		putchar(LETTER);
		LETTER++;
	}
	putchar('\n');


	return (0);
}
