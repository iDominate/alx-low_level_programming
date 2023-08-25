#include "main.h"

/**
 * _strncat - does the same functionality as strcat()
 *
 * @dest: destination buffer
 * @src: source buffer
 * @n: the number of bytes
 * Return: char *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, i1;

	i = 0;

	while (dest[i])
		i++;
	for (i1 = 0; i1 < n && src[i1] != '\0'; i1++)
	{
		dest[i++] = src[i1];
	}

	return (dest);
}
