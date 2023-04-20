#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(valist, char *);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(valist);
}
