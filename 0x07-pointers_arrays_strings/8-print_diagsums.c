#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals
 *
 * @a: pointer to a matrix
 * @size: size of matrix
 *
 * Returns: void
 */
void print_diagsums(int *a, int size)
{
	int i, result;

	result = 0;
	for (i = 0; i < size; i++)
	{
		result += *(a + (i * size) + i);

	}
	printf("%d, ", result);
	result = 0;

	for (i = 0; i < size; i++)
	{
		result += *(a + (i * size) + (size - 1 - i));
	}
	printf("%d\n", result);



}
