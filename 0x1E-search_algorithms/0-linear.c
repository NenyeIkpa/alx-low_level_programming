#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: given array
 * @size: size of array
 * @value: value to be searched in array
 *
 * Return: int
*/

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
