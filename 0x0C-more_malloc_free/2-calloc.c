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
	int arr_size, i;

	arr_size = nmemb * size;
	char_ptr = (char *) malloc(arr_size);
	if (size == 0)
		return (NULL);
	if (!char_ptr)
		return (NULL);
	for (i = 0; i < arr_size; i++)
	{
		*(char_ptr + i) = 0;
	}
	ptr = (void *) char_ptr;
	return (ptr);
}
