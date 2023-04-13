#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _is_positive_digit - checks for positive digit
 * @n: integer to check
 *
 * Return: the checked integer
 */
int _is_positive_digit(char *n)
{
	while (*n != '\0')
	{
		if (!isdigit(*n))
		{
			return (0);
		}
		n++;
	}
	return (isdigit(*(n - 1)));
}

/**
 * mul - multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: return the result of the multiplication
 */
int mul(int a, int b)
{
	int multiply;
	/*
	*for (; i < b; i++)
	*{
	*	multiply += a;
	*}
	*/
	multiply = a * b;
	return (multiply);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		if (!_is_positive_digit(num1) || !_is_positive_digit(num2))
		{
			printf("Error\n");
			exit(98);
		}
		else
		{
			res = mul(atoi(num1), atoi(num2));
			printf("%d\n", res);
			exit(0);
		}
	}
}
