#include "main.h"

/**
 * len- returns the length of str
 * @str: string counted
 *
 * Return: the length
 */

int len(char *str)
{
	int len = 0

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
