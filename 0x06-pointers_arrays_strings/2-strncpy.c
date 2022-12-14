#include "main.h"

/**
 * _strncpy- c function that copies a string
 * including the terminating null byte
 * using an inputted number of bytes
 * If the length of the source string is less than
 * maximum byte number, the remainderof the destination
 * string is filled with a null bytes
 * Works identically to the standard library function 'strncpy'.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: max number of byte copied
 *
 * Return: the returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
