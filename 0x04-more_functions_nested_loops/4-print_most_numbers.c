#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, except for 2 and 4
 *
 * Return: returns no value
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if (a == 50)
			continue;
		else if (a == 52)
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
