#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, count;
	char *s, c;
	float f;
	const char *fmt = format;
	va_list valist;

	va_start(valist, format);

	while (*fmt != '\0')
	{
		if (*fmt == 'i')
		{
			i = va_arg(valist, int);
			printf("%d", i);
		}
		else if (*fmt == 'c')
		{
			c = va_arg(valist, int);
			printf("%c", c);
		}
		else if (*fmt == 'f')
		{
			f = va_arg(valist, double);
			printf("%f", f);
		}
		else if (*fmt == 's')
		{
			s = va_arg(valist, char *);
			if (s == NULL)
				printf("(nil)");
			else if (s != NULL)
				printf("%s", s);
		}
		if (*(++fmt) && count++)
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(valist);
}
