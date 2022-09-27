#include "main.h"
#include <stdio.h>

/**
 * puts_half -it prints a string
 * @str: the string to print
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	len++;

	return (len);
}