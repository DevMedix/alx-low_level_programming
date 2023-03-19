#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 1; d < 10; d++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					if (c < 10 || d < 10)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
