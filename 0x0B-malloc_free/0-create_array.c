#include <stdlib.h>

/**
 * create_array - creates an array and allocates it with c
 *
 * @size: size of array
 * @c: the character to use
 *
 * Return: a pointer to the newly created array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;
	
	if (size == 0)
	{
		return (NULL);
	}
	p = (char *) malloc(size * sizeof(char));

	if(!p)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
