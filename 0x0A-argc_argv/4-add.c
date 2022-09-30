#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <type.h>
#include "main.h"

/**
 * main- it takes all integer arguments and return the sum
 * @argc: the number of command line arguments
 * @argv: the array name
 *
 * Return: 1 if it's a non-integer passed, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
