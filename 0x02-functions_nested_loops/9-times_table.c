#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: no requrn value is specified
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int c = a * b;

			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
			}
			_putchar((c % 10) + '0');
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
