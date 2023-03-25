#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times to print the diagonal line
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int a, b;

		for (a = 1; a <= n; a++)
		{
			for (b = 2; b <= a; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
