#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1, num2, answer;
	op_t operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator.op = argv[2];

	operator.f = get_op_func(operator.op);

	if (operator.f == NULL || operator.op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator.op[0] == '/' || operator.op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	answer = operator.f(num1, num2);

	printf("%d\n", answer);

	return (0);
}
