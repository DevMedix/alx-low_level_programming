#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*int a = 0;

	while (a <= 8)
	{
		int b = a + 1;

		while (b <= 9)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a <= 8 && b <= 9)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}*/

	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a +1; b < 10; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a <= 8 && b <= 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
