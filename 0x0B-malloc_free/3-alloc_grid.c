#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **int_arr, i;

	if (width <= 0 || height <= 0)
		return (NULL);
	int_arr = calloc(height, sizeof(int *));
	for (i = 0; i < height; i++)
		int_arr[i] = calloc(width, sizeof(int));
	if (int_arr == NULL)
		return (NULL);
	return (int_arr);
}
