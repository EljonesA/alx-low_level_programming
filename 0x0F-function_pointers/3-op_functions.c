#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns sum of a and b
 * @a: input int
 * @b: input int
 * Return: sum of a+b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns diff between a and b
 * @a: input int
 * @b: input int
 * Return: the difference.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns multiplication of a and b
 * @a: input int
 * @b: input int
 * Return: muliplication of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the dividend of a and b
 * @a: input int
 * @b: input int
 * Return: dividend of a and b.
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
 * op_mod - returns module of a and b
 * @a: input int
 * @b: input int
 * Return: module of a and b.
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
