#include <stdlib.h>

/**
 * free_grid - frees a dynamically allocated memory
 *
 * @grid: 2D array
 * @height: int
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
