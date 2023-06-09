#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to be flipped
 * to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int counter = 0;

	while (xor_result != 0)
	{
		counter += xor_result & 1;
		xor_result >>= 1;
	}
	return (counter);
}
