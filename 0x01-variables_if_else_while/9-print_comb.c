#include <stdio.h>
/**
 * main- This is the entry point
 *
 * Return: 0
 */
int main(void)

{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{ 
			break;
		}

		putchar(',');
		putchar (' ');
	}
	putchar('\n');

	return (0);
}
