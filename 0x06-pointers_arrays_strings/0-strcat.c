#includem"main.h"

/**
 * _strcat - it connects the string pointed to by @src to
 * the end of the string pointed by @dest
 * @dest: the string that will be appended
 * @src: string to be concatenated upon
 *
 * Return: pointer to @dest
 */

char *_strcat(char *dest, char *src)
{

	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
