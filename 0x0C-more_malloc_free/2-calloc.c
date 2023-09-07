#include <stdlib.h>

/**
 * _calloc - similar to clloc
 *
 * @nmemb: size of arr
 * @size: size of type
 *
 * Return: a new pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
		int range, i;
	int *p;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	p = malloc(range * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(p + i) = min + i;
	}

	return (p);
}
