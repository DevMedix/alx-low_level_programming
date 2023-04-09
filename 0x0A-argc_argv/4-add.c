#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive integers using command line arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 1;

	int add = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		char *check = argv[i];

		while (*check)
		{
			if (!isdigit(*check))
			{
				printf("Error\n");
				return (1);
			}

			check++;
		}

		add += atoi(argv[i]);

		i++;
	}

	printf("%d\n", add);

	return (0);
}
