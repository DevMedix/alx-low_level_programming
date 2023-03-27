#include "main.h"
#include <string.h>

/**
 * rev_string - prints out a string
 * @s: string to print out
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;
	char *begin, *end, tempo;

	length = strlen(s);
	begin = s;
	end = s + length - 1;
	for (i = 0; i < (length - 1) / 2; i++)
	{
		tempo = *end;
		*end = *begin;
		*begin = tempo;
		begin++;
		end--;
	}
	_putchar('\n');
}

/**
 * _strlen - gets the length of a string. _puts - prints out string
 * @s: string to check length
 *
 * Return: length
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
