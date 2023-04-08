#include "main.h"

/**
 * _abs - prints out absolute integer number a
 * @a: number to be printed out
 *
 * Return: returns the result of a
 */
int _abs(int a)
{
	int result;

	if (a >= 0)
		result = a;
	else if (a < 0)
		result = -a;
	return (result);
}
