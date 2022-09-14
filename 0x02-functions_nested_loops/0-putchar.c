#include "main.h"
#include <string.h>

/**
 * main- This is the entry point
 *
 *Prints putchar using the putchar prototype
 * Return: Always 0
 */
int main(void)

{
	char str[] ="_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}

#endif
