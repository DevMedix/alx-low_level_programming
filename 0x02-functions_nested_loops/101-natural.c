#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int sum = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			sum = sum + a;
		else
			continue;
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
