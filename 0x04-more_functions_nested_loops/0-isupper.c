#include "main.h"

/**
 * _isupper- checks if a letter is uppercase
 * @x: number to be checked
 *
 * Return: 1 for upper letter or 0 otherwise
 */
int _isupper(int x)
{
	if ((x >= 'A') && (x <= 'Z'))

		return (1);
	else
		return (0);
}
