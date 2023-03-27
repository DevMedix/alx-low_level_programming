#include "main.h"

/**
 * _puts - prints out a string
 * _strlen - gets the length of a string
 * @str: string tp print out
 * @s: string to count
 *
 * Return: length
 */
int _strlen(char *s);
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
