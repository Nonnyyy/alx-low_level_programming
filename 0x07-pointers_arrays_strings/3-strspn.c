#include "main.h"

/**
 * _strspn- gets length of a prefix subtracting
 * @s: the string to check
 * @accept: string to check against
 *
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[i]; j++)
		{
			if (s[i] == accept[j]; j++)
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
