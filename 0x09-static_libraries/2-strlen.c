#include "main.h"

/**
 * _strlen - it returns the lenght of a string
 * @s: the string
 * Return: it returns the length as the integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
