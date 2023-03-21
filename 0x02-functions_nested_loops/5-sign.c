#include "main.h"

/**
 * print_sign - prints the sign os a number n
 * @n: nuber to be printed
 *
 * Return: on success 1
 */
int print_sign(int n)
{

	if ((n % 10) > 0)
	{
		_putchar(43);
		return (1);
	}
	else if ((n % 10) == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
