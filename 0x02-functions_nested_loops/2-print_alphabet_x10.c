#include "main.h"

void print_alphabet_x10(void)
{
	int a = 48;

	while (a <= 57)
	{
		int b = 97;

		while (b <= 122)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
