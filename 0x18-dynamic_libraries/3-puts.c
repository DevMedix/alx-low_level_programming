#include "main.h"
#include <string.h>
/**
 * _puts - prints out a string
 * @str: string to print out
 *
 * Return: void
 */
void _puts(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
