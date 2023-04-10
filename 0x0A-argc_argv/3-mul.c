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
	long int num;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	while (i < argc)
	{
		char *end;
		errno = 0;
		num = strtol(argv[i], &end, 10);

		if (errno != 0 || *end != '\0')
		{
			printf("Error\n");
			return (1);
		}

		multiply *= num;

		i++;
	}

	printf("%ld\n", multiply);

	return (0);
}
