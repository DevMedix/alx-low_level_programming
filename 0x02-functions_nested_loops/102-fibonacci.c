#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;
	b = 1;

	for (a = 1; a <= 50; a++)
	{
		printf("%d", a);
		if (a < 30)
			printf(", ");
		c = a + b;
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}
