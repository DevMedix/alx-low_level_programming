#include "main.h"

/**
 * print_numbers - displays the numbers, from 0 to 9
 *
 * Return: no return present
 */
void print_numbers(void)
{
	int a;

	a = 48;
	while (a <= 57)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
