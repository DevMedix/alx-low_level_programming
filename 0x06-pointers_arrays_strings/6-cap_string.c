#include "main.h"

/**
 * cap_string - capitalize the first letter of each word
 * @a: string to capitalize
 *
 * Return: returns a
 */
char *cap_string(char *a)
{
	int capitalise_next = 1;

	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ' || a[i] == ',' || a[i] == '\t' ||
		a[i] == '(' || a[i] == ')' || a[i] == '[' ||
		a[i] == ']' || a[i] == '\n' || a[i] == '{' || a[i] == '}' ||
		a[i] == '.' || a[i] == 34 || a[i] == '!' || a[i] == '?')
		{
			capitalise_next = 1;
			continue;
		}
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (capitalise_next)
			{
				a[i] -= 32;
				capitalise_next = 0;
			}
		}
		else
		{
			capitalise_next = 0;
		}
	}
	return (a);
}
