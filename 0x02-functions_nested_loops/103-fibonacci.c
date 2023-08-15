#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of even Fionacci sequence up to 4,000,000
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned int b = 2;
	unsigned int sum = 2;
	unsigned int R;

	while (b <= 4000000)
	{
		R = a + b;
		if (R % 2 == 0)
		{
			sum += R;
	}
	a = b;
	b = R;
	}
	printf("%u\n", sum);
	return (0);
}
