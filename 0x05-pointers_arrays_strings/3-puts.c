#include "main.h"

/**
 * _puts - prints out a string
 * @str: string to print out
 *
 * Return: void
 */
void _puts(char *str)
{
	int i, length;

	length = _strlen(str);
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
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
