#include <stdio.h>

/**
 * main- this is the main entry
 * Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write the line of code here
	 * Remember:
	 * -you are not allowed to use a
	 *  -you are not allowed to modify p
	 *  -you are notallowed to code more than one line
	 *  -its only one statement
	 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("[2] = %d\n", a[2]);
	return (0);
}
