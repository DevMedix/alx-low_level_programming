#include "main.h"
/**
 * print_last_digit - takes integer number and prints out the last digit
 *
 * Return: returns the value of the last digit
 */
int print_last_digit(int a)
{
	int result;
	if (a >= 0)
		result = _putchar((a % 10) + '0');
	else if (a < 0)
		result = _putchar(-(a % 10) + '0');
	return (result);
}
