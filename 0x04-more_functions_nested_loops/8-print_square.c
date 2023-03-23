#include "main.h"

/**
 * print_square - prints a square
 * @size: number of times to print square
 *
 * Return: no return value
 */
void print_square(int size)
{
	int a, b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			if (size <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
