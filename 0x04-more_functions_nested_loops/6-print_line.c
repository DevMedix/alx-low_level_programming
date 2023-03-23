#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to draw the line
 *
 *Return: no return value specified
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if ( n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
