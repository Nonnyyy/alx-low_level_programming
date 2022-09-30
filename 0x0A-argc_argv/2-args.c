#include <stdio.h>
#include "main.h"

/**
 * main- it prints all arguments passed into main
 * @argc: the number of command line arguments
 * @argv: the array name
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
