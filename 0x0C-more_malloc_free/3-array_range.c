#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @max: maximum range of the array
 * @min: minimum range of the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *range;
	int num, i;

	if (min > max)
		return (NULL);

	num = max - min + 1;
	range = (int *)malloc(num * sizeof(int));

	if (range == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
