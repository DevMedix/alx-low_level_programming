#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a pointer to a newly allocated space in memory
 * which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *new_str;

	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);

	ptr = s1;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	ptr = new_str;

	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;

	*ptr = '\0';

	return (new_str);
}

/**
 * _strlen - prints the length of a string
 * @str: string
 *
 * Return: returns the string length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
