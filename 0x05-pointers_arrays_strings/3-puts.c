#include <stdio.h>
#include "main.h"

/**
 * _puts- it prints a string
 * @str: the string to be printed
 *
 * Description: to print a string
 * Return: if successful, return no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
