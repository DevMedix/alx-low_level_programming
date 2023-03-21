#include "main.h"

/**
 *  jack_bauer - prints every minute of the day
 *
 * Return: no return value present
 */
void jack_bauer(void)
{
	int a = 00;

	while (a <= 23)
	{
		int b = 00;

		while (b <= 59)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
