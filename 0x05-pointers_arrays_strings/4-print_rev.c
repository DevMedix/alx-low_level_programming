#include "main.h"

/**
 * print_rev - prints out a string in reverse
 * @s: string to print out
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, length;

	length = _strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
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
