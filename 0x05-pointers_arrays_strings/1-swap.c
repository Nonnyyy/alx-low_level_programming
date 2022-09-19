#include "main.h"

/**
 * swap_int - it swaps two integers' values
 * @a: first integer
 * @z: second integer
 * Return: nothing
 */

void swap_int(int *a, int *z)
{
	int tmp = *a;

	*a = *z;
	*z = tmp;
}
