#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory
 * @b: byte value to fill the memory
 * @n: number of memory bytes to fill
 *
 * Return: returns the pointer to the memory (s)
 */
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int counter = 0;

	while (counter <= n - 1)
	{
		s[counter] = (char) b;

		counter++;
	}

	return (s);
}

/**
 * _calloc - allocates memory using malloc.
 * @nmemb: size of the memory
 * @size: type of memory
 *
 * Return: returns a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
