#include <stdlib.h>

/**
 * array_iterator - executes an array with a function
 *
 * @array: array
 * @size: size of the array
 * @action: function to call
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
