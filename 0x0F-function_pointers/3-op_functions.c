#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - a function that returns the sum of a and b
 * @a: integer input
 * @b: integer input
 * Return: the summation of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the subtraction of a and b
 * @a: an input integer
 * @b: and input integer
 * Return: the substract of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the multiplication of a and b
 * @a: integer input
 * @b: integer input
 * Return: the result of a * b
 */

int o_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the divident of a and b
 * @a: integer input
 * @b: integer input
 * Return: the result of a / b
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
 * op_mod - returns the module of a and b
 * @a: input integer
 * @b: integer input
 * Return: the result of module a % b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return ( a % b);
}
