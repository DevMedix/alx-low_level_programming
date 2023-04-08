#include "main.h"

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of memory bytes to copy
 *
 * Return: returns the memory area destination (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter <= n - 1)
	{
		dest[counter] = src[counter];

		counter++;
	}

	return (dest);
}
