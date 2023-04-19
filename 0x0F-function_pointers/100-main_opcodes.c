#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, byte_number;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte_number = atoi(argv[1]);

	if (byte_number < 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;

	while (i < byte_number)
	{
		printf("%02hhx", str[i]);
		if (i < byte_number - 1)
			printf(" ");
		i++;
	}

	printf("\n");

	return (0);
}
