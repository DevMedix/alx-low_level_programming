#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index from a number.
 * @n: The number from which to extract the bit.
 * @index: The index of the bit to retrieve, starting from 0.
 * Return: The value of the bit at the specified index.
 * Returns -1 if an error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;
	unsigned long int cover;

	bits = sizeof(unsigned long int) * 8;
	if (index >= bits)
		return (-1);

	cover = 1UL << index;
	return ((n & cover) != 0);
}
