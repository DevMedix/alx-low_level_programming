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
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
