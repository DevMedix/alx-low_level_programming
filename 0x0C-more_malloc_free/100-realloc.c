#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size:  is the new size, in bytes of the new memory block
 *
 * Return: reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_mem;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	new_mem = malloc(new_size);
	free(ptr);
	return (new_mem);
}
