#include <stdio.h>
#include "main.h"

/**
 * main- the program that prints either number
 * or fizz, buzz or fizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
		{
			printf("%s ", Buzz);
		}
		else if ((num % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", FizzBuzz);
		}
		else if ( num % 3 == 0)
		{
			printf("%s ", Fizz);
		}
		else if (num % 5 == 0)
		{
			printf("%s ", Buzz);
		}
		else
		{
				printf("%d ", num);
		}
	}
	printf("\n");
	return (0);
}
