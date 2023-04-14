#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _positive_digit - checks for digits
 * @num: integer to check
 *
 * Return: returns 1
 */
int _positive_digit(char *num)
{
	int i = 0;
	int len = strlen(num);

	for (; i < len; i++)
	{
		if (!isdigit(num[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * multiply - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: return the result of the multiplication
 */

int multiply(char *a, char *b)
{
	return (atoi(a) * atoi(b));
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int result;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!_positive_digit(num1) || !_positive_digit(num2))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}

