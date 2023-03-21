#include "main.h"

/**
 * print_alphabet - prints all alphabets that are in lower case
 *
 *Return: No return type present
 */
void print_alphabet(void)
{
	int a = 97;

	while (a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
