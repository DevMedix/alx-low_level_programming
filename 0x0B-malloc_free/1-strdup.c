#include <stdlib.h>
#include "main.h"

/**
 * _strlen - prints the length of a string
 * @str: string
 *
 * Return: returns the string length
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination string
 * @src: source string
 *
 * Return: returns a pointer of the copied string
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (ptr);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: On success, returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *pr;

	if (str == NULL)
		return (NULL);

	pr = (char *)malloc((_strlen(str) + 1) * sizeof(char));

	if (pr == NULL)
		return (NULL);

	_strcpy(pr, str);

	return (pr);
}
