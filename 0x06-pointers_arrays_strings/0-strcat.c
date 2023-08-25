#include "main.h"

/**
 * _strcat - does the same functionality as strcat()
 *
 * @dest: destination buffer
 * @src: source buffer
 *
 * Return: char *
 */
char *_strcat(char *dest, char *src)
{
	int i, i1;

	i = 0;

	while (dest[i])
		i++;
	for (i1 = 0; src[i1]; i1++)
	{
		dest[i++] = src[i1];
	}

	return (dest);
}
