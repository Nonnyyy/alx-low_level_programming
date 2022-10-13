#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add- it adds a and b
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- it subtracts a from b
 * @a: first number
 * @b: second number
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- it multiplies a and b
 * @a: first number
 * @b: second number
 *
 * Return: division of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- it divides a by b
 * @a:first number
 * @b: second number
 *
 * Return: division of a by b
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
 * op_mod- find the remainder of the division of
 * a by b
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a by b
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
