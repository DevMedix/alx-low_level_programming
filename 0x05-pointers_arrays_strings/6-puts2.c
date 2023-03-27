#include "main.h"

/**
 * puts2 - prints out half of a string
 * @str: string to print out
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, length;

	length = _strlen(str);
	for (i = 0; i < length; i += 2)
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
