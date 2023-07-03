#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: square matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				sum1 = sum1 + *(a + i*2 + j);
			if (j + i == size - 1)
				sum2 = sum2 + *(a + i*2 + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
