#include <stdio.h>

/**
 * main - fibonnaci sequence starting from 1, 2, 3
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int R, i;

	printf("%lu, %lu", a, b);

	for (i = 3; i <= 50; i++)
	{
	R = a + b;

	printf(", %lu", R);

	a = b;
	b = R;
	}
	printf("\n");
	return (0);
}
