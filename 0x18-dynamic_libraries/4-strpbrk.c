#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: string used to search @s
 *
 * Return: return the searched string
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	for (; *s; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}

		}
	}
	return (NULL);
}
