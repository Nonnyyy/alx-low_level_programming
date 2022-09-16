#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the number from 1 to 100 followed by new line
 * For multiples of three it prints Fizz
 * For multiples of five it prints Buzz
 * For multiples of 3 & 5 prints FizzBuzz
 * Return: 0
 */

int main(void)
{
	int i;
	char f[] = "Fizz";
	char b[] = "Buzz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s ", b);
		}
		else if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("%s ", fb);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", f);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
