#include <stdlib.h>
/**
 * _realloc - similar to realloc
 *
 * @ptr: the pointer to array
 * @old_size: old size of array
 * @new_size: new size of array
 *
 * Return: a new pointer to an array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *char_ptr, *char_ptr2;
	unsigned int i;

	char_ptr = (char *) ptr;
	char_ptr2 = (char *) malloc(new_size);

	if (!char_ptr2)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if(!ptr)
	{
		p = malloc(new_size);
		if (!p)
		{
			free(ptr);
			return (NULL);
		}
		free(ptr);
		return (p);
	}
	for (i = 0; (i < new_size) && char_ptr[i]; i++)
	{
		char_ptr2[i] = char_ptr[i];
	}
	p = (void *) char_ptr2;
	free(ptr);
	return (p);
}
