#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index in a number.
 * @n: A pointer to the number in which to clear the bit.
 * @index: The index of the bit to set to 0, starting from 0.
 * Return: 1 if the operation was successful,
 * or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits;
	unsigned long int cover;

	bits = sizeof(unsigned long int) * 8;
	if (index >= bits)
		return (-1);

	cover = 1UL << index;
	*n &= ~cover;
	return (1);
}
