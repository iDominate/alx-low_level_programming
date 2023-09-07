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
	void *ptr;
	char *char_ptr;
	int i, arr_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_size = nmemb * size;
	char_ptr = (char *) malloc(arr_size);
	if (!char_ptr)
		return (NULL);
	for (i = 0; i < arr_size; i++)
	{
		char_ptr[i] = i;
	}
	ptr = (void *) char_ptr;
	return (ptr);

}
