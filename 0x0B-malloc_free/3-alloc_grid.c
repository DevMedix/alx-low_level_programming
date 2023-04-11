#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a 2 dimensional array of integers.
 * @width: column of the 2D array
 * @height: row of the 2D array
 *
 * Return:  returns a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	while (i < height)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		j = 0;

		if (array[i] == NULL)
		{
			while (j < i)
			{
				free(array[j]);
				j++;
			}
			free(array);
			return (NULL);
		}

		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}

