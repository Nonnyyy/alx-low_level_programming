#include <stdio.h>
/**
 * main- This is the entry point
 *
 * Return: 0
 */
int main(void)

{
	char base_16;

	for (base_16 = 48; base_16 <= 57; base_16++)
	{
		putchar(base_16);
	}
	putchar('\n');

	return (0);
}
