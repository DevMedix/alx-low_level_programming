#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory
 * @b: byte value to fill the memory
 * @n: number of memory bytes to fill
 *
 * Return: returns the pointer to the memory (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter <= n - 1)
	{
		s[counter] = b;

		counter++;
	}

	return (s);
}
