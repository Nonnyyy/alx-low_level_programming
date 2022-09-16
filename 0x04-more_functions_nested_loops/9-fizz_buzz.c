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
	int k = 1;

	while (k <= 100)
	{
		if (k % 3 == 0 && k % 5 == 0)
			printf("FizzBuzz ");
		else if (k % 5 == 0)
		{
			if (k == 100)
			{
				printf("Buzz ");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (k % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", k);
		k++
	}
	return (0);
}
