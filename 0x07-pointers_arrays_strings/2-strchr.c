#include "main.h"

/**
 * _strchr -  locates a character in a string.
 * @s: pointer array
 * @c: occurence character
 *
 * Return: returns the pointer if true and returns NULL if false
 */
char *_strchr(char *s, char c)
{

		for (; *s != '\0'; s++)
		{
			if (*s == c)
				return (s);
		}
		return (0);
}
