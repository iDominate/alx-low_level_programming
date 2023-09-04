#include <stdlib.h>

/**
 * free_grid - frees the memory for a matrix
 *
 * @grid: matrix
 * @height: height of matrix
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
