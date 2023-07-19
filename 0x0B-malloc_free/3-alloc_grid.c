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
	int **int_arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	**int_arr = malloc(height * sizeof(int *));
	if (int_arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		int_arr[i] = calloc(width, sizeof(int));
		if (int_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(int_arr[j]);
			free(int_arr);
			return (NULL);
		}
	}
	return (int_arr);
}
