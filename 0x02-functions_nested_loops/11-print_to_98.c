#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to be printed
 *
 * Return: no return value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
				printf(", ");
		}
	}
	else if (n >= 98)
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
				printf(", ");
		}
	}
	printf("\n");
}
