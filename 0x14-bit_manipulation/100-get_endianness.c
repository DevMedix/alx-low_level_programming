#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if the system is big endian, 1 if it is little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *per_byte = (char *)&num;

	return ((int)(*per_byte));
}
