#include "main.h"

/**
 * prime_helper_function - a helper function for the is_prime_number
 * @n: number to check
 * @check: second variable
 *
 * Return: returns the result
 */
int prime_helper_function(int n, int check)
{
	if (n == 0 || n == 1)
		return (0);
	if (check * check > n)
		return (1);
	if ((n % check) == 0)
		return (0);

	return (prime_helper_function(n, check + 1));
}

/**
 * is_prime_number - checks for an integer number
 * @n: number to check
 *
 * Return: returns 0 if it is not a prime number or 1 if it is a prime number
 */
int is_prime_number(int n)
{
	int check = 2;

	return (prime_helper_function(n, check));
}
