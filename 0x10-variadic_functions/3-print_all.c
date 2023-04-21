#include "variadic_functions.h"

/**
 * print_int - prints a char format.
 * @val: format type
 * @count: count variable
 *
 * Return: void
 */

void print_int(int val, int *count)
{
	printf("%d", val);
	(*count)++;
}

/**
 * print_char - prints a char format
 * @val: format type
 * @count: count variable
 *
 * Return: void
 */
void print_char(char val, int *count)
{
	printf("%c", val);
	(*count)++;
}

/**
 * print_float - prints a float format
 * @val: format type
 * @count: count variable
 *
 * Return: void
 */
void print_float(float val, int *count)
{
	printf("%f", val);
	(*count)++;
}

/**
  * print_string - prints a string format
  * @val: format type
  * @count: count variable
  *
  * Return: void
  */
void print_string(char *val, int *count)
{
	if (val == NULL)
		printf("(nil)");
	if (val != NULL)
		printf("%s", val);
	(*count)++;
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int count = 0;
	const char *fmt = format;
	va_list valist;

	va_start(valist, format);

	while (*fmt != '\0')
	{
		switch (*fmt++)
		{
			case 'i':
				print_int(va_arg(valist, int), &count);
				break;
			case 'c':
				print_char(va_arg(valist, int), &count);
				break;
			case'f':
				print_float(va_arg(valist, double), &count);
				break;
			case 's':
				print_string(va_arg(valist, char *), &count);
				break;
			default:
				continue;
		}
		if (*fmt != '\0' && count > 0)
		{
			printf(", ");
			count = 0;
		}
	}
	printf("\n");
	va_end(valist);
}
