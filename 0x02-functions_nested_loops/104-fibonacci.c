#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if success
 */
int main(void)
{
	int a = 1, b = 2, c, count = 0;

	printf("%d, %d, ", a, b);
	count += 2;
	while (count < 98)
	{
		c = a + b;

		printf("%d, ", c);

		a = b;
		b = c;

		count++;
	}

	c = a + b;

	printf("%d\n", c);
	return (0);
}
