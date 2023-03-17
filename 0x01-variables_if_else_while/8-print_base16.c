#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0x30;
	int b = 0x61;

	while (a <= 0x39)
	{
		putchar(a);
		a++;
	}
	while (b <= 0x66)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
