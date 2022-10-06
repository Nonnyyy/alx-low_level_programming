#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked- it allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: the pointer to allocated memory
 * or back to process if there is an error
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
