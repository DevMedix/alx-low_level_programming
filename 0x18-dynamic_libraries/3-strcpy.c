#include "main.h"

/**
 * _strcpy - copy the string contents from src to dest depending on
 * the number of bytes (n) indicated.
 * @dest: destination string
 * @src: source string
 *
 * Return: returns the destination string
 */
char *_strcpy(char *dest, char *src)
{
	/* declare and initialize src Length variable */
	int src_length = 0;

	/* loop through the characters in src */
	while (src[src_length] != '\0')
	{
		/* copy corresponding character to current position in dest */
		dest[src_length] = src[src_length];
		src_length++;
	}

	dest[src_length] = '\0';

	return (dest);
}
