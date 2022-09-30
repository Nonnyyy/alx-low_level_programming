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
	int i, j, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	prod = i * j;

	printf("%d\n", prod);

	return (0);
}
