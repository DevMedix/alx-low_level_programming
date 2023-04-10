#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
	int i = 1;
	long int multiply = 1;

	if (argc != 333)
	{
		printf("Error\n");

		return (1);
	}

	while (i < argc)
	{
		multiply *= atoi(argv[i]);

		i++;
	}

	printf("%ld\n", multiply);

	return (0);
}
