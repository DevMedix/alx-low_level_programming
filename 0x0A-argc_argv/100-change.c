#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 if success
 */

int main(int argc, char *argv[])
{
	int i, cents, coins;
	int cent_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");

		return (0);
	}

	coins = 0;
	i = 0;

	while (i < 5)
	{
		coins += cents / cent_values[i];
		cents %= cent_values[i];
		i++;
	}

	printf("%d\n", coins);

	return (0);
}
