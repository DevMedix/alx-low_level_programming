#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index in a number.
 * @n: A pointer to the number in which to set the bit.
 * @index: The index of the bit to set to 1, starting from 0.
 * Return: 1 if the operation was successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int cover;
	unsigned int bits;

	bits = sizeof(unsigned long int) * 8;
	if (index >= bits)
		return (-1);

	cover = 1UL << index;
	*n |= cover;
	return (1);
}
