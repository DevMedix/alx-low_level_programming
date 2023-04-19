#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: if successful returns the index of the first
 * element for which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (1);

	if (size <= 0)
		return (-1);

	/* Loop through the array */
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0) /* Check if current element is same */
			return (i);
	}

	return (-1);
}
