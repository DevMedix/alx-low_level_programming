#include "main.h"

/**
 * string_toupper - changes all lower case character to upper case
 * @a: string to change to uppercase
 *
 * Return: returns a
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - 32;
		}
	}
		return (a);
}
