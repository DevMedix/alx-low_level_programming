#include <stdio.h>

/**
 * main - prints out the value of argv
 * @argc: argument count
 * @argv: argument string array
 *
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
