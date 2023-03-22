#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c;

	b = 1;
	for (a = 1; a <= 20365011074; a++)
	{
		printf("%ld", a);
		if (a < 20365011074)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
