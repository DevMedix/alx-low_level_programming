#include "main.h"

/**
 * binary_to_uint - Converts a binary number represented
 * as a string to an unsigned integer.
 * @b: The binary number string. Must contain only '0' and '1' characters.
 * Return: converted unsigned integer. Returns 0 if
 * the string is invalid or NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		num = (num << 1) + (*b - '0');
		b++;
	}

	return (num);
}
