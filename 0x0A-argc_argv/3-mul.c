#include <stdlib.h>
#include <stdio.h>

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
	int multiply = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			multiply *= atoi(argv[i]);

			i++;
		}
		printf("%d\n", multiply);
	}
	return (0);
}
