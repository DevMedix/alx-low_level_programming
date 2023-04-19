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
	int i, byte_number;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte_number = atoi(argv[1]);

	if (byte_number <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	str = (char *)main;

	for (i = 0; i < byte_number; i++)
		printf("%02hhx", str[i]);

	printf("\n");

	return (0);
}
