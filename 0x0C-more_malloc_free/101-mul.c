#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be checked
 *
 * Return: 0 if a non-digit, else 1
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - prints the length of a string
 * @s: string to print length
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len_s1, len_s2, len, i, array, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	len = len_s1 + len_s2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len_s1 + len_s2; i++)
		result[i] = 0;
	for (len_s1 = len_s1 - 1; len_s1 >= 0; len_s1--)
	{
		digit1 = s1[len_s1] - '0';
		array = 0;
		for (len_s2 = _strlen(s2) - 1; len_s2 >= 0; len_s2--)
		{
			digit2 = s2[len_s2] - '0';
			array += result[len_s1 + len_s2 + 1] + (digit1 * digit2);
			result[len_s1 + len_s2 + 1] = array % 10;
			array /= 10;
		}
		if (array > 0)
			result[len_s1 + len_s2 + 1] += array;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar(10);
	free(result);
	return (0);
}

