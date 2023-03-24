#include "main.h"

/**
 * print_times_table - prints the times table of a given number n
 * @n: number to be printed
 *
 * Return: no return value
 */
void print_times_table(int n)
{
	int a, b, c;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;

				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c >= 10 && c < 100)
				{
					_putchar(' ');
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
				else if (c < 10)
				{
					if (b != 0)
					{
					_putchar(' ');
					_putchar(' ');
					}
					_putchar((c % 10) + '0');
				}
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
