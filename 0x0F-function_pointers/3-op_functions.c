#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the result of the sum
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}

/**
 * op_sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the result of the subtraction
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}

/**
 * op_mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the result of the multiplication
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}

/**
 * op_div - divide two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the result of the division
 */
int op_div(int a, int b)
{
	int result;

	result = a / b;
	return (result);
}

/**
 * op_mod - mod two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: returns the result of the mod
 */
int op_mod(int a, int b)
{
	int result;

	result = a % b;
	return (result);
}
