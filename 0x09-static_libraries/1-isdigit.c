#include "main.h"

/**
 * _isdigit- function that checks digits 0-9
 * @c: this is the input
 * Return: 1 if c is a digit, 0 when otherwise
 */
int _isdigit(int c)
{

	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

		return (0);
}
