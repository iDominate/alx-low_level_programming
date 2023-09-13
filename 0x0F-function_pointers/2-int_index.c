#include <stdlib.h>

/**
 * int_index - searches for an int
 *
 * @array: array
 * @size: size of array
 * @cmp: compare function
 *
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	result = -1;
	if (size <= 0)
		return (result);
	if (array == NULL || cmp == NULL)
		return (result);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
		{
			result = i;
			return (result);
		}
		if (cmp(array[i]) == -1)
			return (result);
	}
	return (result);
}
