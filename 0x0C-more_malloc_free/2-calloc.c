#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory using malloc.
 * @nmemb: size of the memory
 * @size: type of memory
 *
 * Return: returns a pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);


	return (ptr);
}
