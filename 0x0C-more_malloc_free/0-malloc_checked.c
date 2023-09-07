#include <stdlib.h>

/**
 * malloc_checked - allocated memory
 *
 * @b: buffer size
 *
 * Return: a pointer to the newly created memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);

}
