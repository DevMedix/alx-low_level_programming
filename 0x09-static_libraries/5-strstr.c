#include "main.h"

/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: string to search
 * @needle: string used to search @haystack
 *
 * Return: returns haystack
 */
char *_strstr(char *haystack, char *needle)
{

		char *hay_stack;
		char *nee_dle;

	for (; *haystack; haystack++)
	{
		hay_stack = haystack;
		nee_dle = needle;

		for (; *hay_stack == *nee_dle && *nee_dle; nee_dle++)
		{
			hay_stack++;

		}
		if (*nee_dle == '\0')
			return (haystack);
	}
	return ('\0');
}
