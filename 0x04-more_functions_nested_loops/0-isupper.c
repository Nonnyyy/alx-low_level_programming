#include "main.h"

/**
 * _isupper- checks if a letter is uppercase
 * @a: number to be checked
 *
 * Return: 1 for upper letter or 0 for anything else
 */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else
	{ 
		return (0);
	}
}
