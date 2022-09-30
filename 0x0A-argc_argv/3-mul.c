#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main- it takes two integer arguments and print the product
 * @argc: number of command line arguments
 * @argv: the array name
 *
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = i;

		for (i = 1; i < 3; i++)
			j *= atoi(argv[i]);

		printf("%d\n", j);
	}

	return (0);
}
