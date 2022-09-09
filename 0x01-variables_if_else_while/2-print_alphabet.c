#include <stdio.h>
/**
 * main- This is the entry point
 *
 * Return: 0
 */
int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
