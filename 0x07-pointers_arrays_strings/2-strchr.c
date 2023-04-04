#include "main.h"
#include <stddef.h>

/**
 * _strchr -  locates a character in a string.
 * @s: pointer array
 * @c: occurence character
 *
 * Return: returns the pointer if true and returns NULL if false
 */
char *_strchr(char *s, char c)
{
	int counter, j;

	counter = 0;


	while (s[counter] != '\0')
	{
		;
		counter++;
	}

	j = 0;

	while (j <= counter)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		j++;
	}
	return (NULL);
}
