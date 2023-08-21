#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination pointer variable
 * @src: source pointer variable
 *
 * Return: returns the result of destination
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
		*dest++ = *src++;

	*dest = '\0';

	return (result);
}
