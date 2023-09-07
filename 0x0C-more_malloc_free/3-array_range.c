#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of numbers
 *
 * @min: min number
 * @max: max number
 *
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
		return (NULL);
	size = ((max + 1) - min);
	/*printf("%d\n", size);*/
	/*printf("%ld\n", (size * sizeof(int)));*/
	arr = (int *) malloc(size * sizeof(int));

	if (!arr)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = i;
		/*printf("%d\n", arr[i]);*/
	}

	return (arr);
}
