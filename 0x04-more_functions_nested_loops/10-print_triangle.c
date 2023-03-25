#include "main.h"

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = a + 1; b <= size; b++)
			{
				_putchar(' ');
			}
			for (c = 1; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
