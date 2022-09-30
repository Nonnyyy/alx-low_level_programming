#include "main.h"

/**
 * _isupper- checks if a letter is uppercase
 * @c: number to be checked
 *
 * Return: 1 for upper letter or 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))

		return (1);
	else
		return (0);
}
