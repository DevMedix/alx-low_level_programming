#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: variable to hold the array
 * @size: size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int first_diagonal, second_diagonal, row, column;

	first_diagonal = 0;
	second_diagonal = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (row == column)
			{
				first_diagonal += a[row * size + column];
			}

			if (row == size - column - 1)
			{
				second_diagonal += a[row * size + column];
			}
		}
	}
	printf("%d, %d\n", first_diagonal, second_diagonal);
}
