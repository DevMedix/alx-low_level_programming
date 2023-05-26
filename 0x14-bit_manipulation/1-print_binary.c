#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int move = sizeof(unsigned long int) * 8 - 1;
	unsigned long int cover = 1UL << move;
	int lead_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}


	while ((cover & n) == 0)
	{
		cover >>= 1;
		lead_zero++;
	}

	while (cover != 0)
	{
		if ((cover & n) != 0)
			_putchar('1');
		else
			_putchar('0');

		cover >>= 1;
	}

	_putchar('\n');
}
