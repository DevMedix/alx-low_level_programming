#include "main.h"

/**
 * _strncpy - copy the string contents from src to dest depending on
 * the number of bytes (n) indicated.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: returns the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	/* declare and initialize src Length variable */
	int src_length = 0;

	/* loop through the characters in src */
	while (src_length < n && src[src_length] != '\0')
	{
		/* copy corresponding character to current position in dest */
		dest[src_length] = src[src_length];
		src_length++;
	}

	while (src_length < n)
	{
		/* fill any remaining space in dest with null characters. */
		dest[src_length] = '\0';
		src_length++;
	}

	return (dest);
}
