#include "main.h"

/**
 * _sqrt - helper function
 * @num: number
 * @sqr: starting number
 *
 * Return: returns the square root
 */
int _sqrt(int n, int sqr)
{
	if ((sqr * sqr) > n)
		return (-1);
	if ((sqr * sqr) == n)
		return (sqr);
	return (_sqrt(n, sqr + 1));
}

/**
 * _sqrt_recursion - returns the square root of an integer
 * @n: integer to find square root
 *
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
