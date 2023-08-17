#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first num
 * @b: second num
 * Return: the summ.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first num
 * @b: second num
 * Return: the sub.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two numbers
 * @a: first num
 * @b: second num
 * Return: the result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - mul two numbers
 * @a: first num
 * @b: second num
 * Return: the result.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - mul two numbers
 * @a: first num
 * @b: second num
 * Return: the result.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
