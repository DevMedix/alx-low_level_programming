#include "main.h"

/**
 * _strncat - joins two strings together while src is
 * less than the number of bytes given in n
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: returns the destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_length, src_length;

	for (dest_length = 0; dest[dest_length] != '\0'; dest_length++)
		;

	for (src_length = 0; src_length < n && src[src_length] != '\0'; src_length++)
		dest[dest_length + src_length] = src[src_length];

	dest[dest_length + src_length] = '\0';

	return (dest);
}
