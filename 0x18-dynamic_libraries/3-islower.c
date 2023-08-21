#include "main.h"
/**
 * _islower - prints out lower case alphabet only if the integer c is lowercase
 * @c: The integer to print
 *
 * Return: On success 1, on failure 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
