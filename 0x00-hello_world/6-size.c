#include <stdio.h>

/**
 * main - print the string in the main function
 *
 * Description: using the main finction
 * It prints "programming is like building a multilingual puzzle"
 * Return 0
 */
int main(void)
{
	char d;
	int a;
	long b;
	long long c;
	float f;

	ptintf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));
	return (0);
}
