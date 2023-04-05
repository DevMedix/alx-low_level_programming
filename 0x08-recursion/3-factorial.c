#include "main.h"

/**
 * factorial - prints the factorial of a given number n
 * @n: number to print it's factorial
 *
 * Return: return n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
