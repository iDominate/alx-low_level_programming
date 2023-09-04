#include <stdlib.h>


/**
 * alloc_grid - allocates memory for a h * w matrix
 *
 * @width: w
 * @height: h
 *
 * Return: a pointer to the matrix
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **n;

	if (width == 0 || height == 0)
		return (NULL);
	n = calloc(height, sizeof(int *));
	for (i = 0; i < height; i++)
	{
		n[i] = calloc(width, sizeof(int ));
	}
	return (n);

}
