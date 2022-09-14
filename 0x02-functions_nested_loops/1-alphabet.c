#include "main.h"
/**
 * print_alphabet -this is the entry point
 * Description - function to print the abc
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
