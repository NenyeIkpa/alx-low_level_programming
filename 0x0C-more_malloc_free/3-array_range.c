#include <stdlib.h>

/**
 * array_range -  creates an array of integers
 *
 * @min: parameter of type int
 * @max: parameter of int type
 *
 * Return: int
 */

int *array_range(int min, int max)
{
	int arr_size, i;
	int *int_arr;

	if (min > max)
		return (NULL);
	arr_size = max - min + 1;
	int_arr = malloc(arr_size * sizeof(int));
	if (int_arr == NULL)
		return (NULL);
	for (i = 0; i <= arr_size; i++)
		int_arr[i] = min + i;
	return (int_arr);
}
