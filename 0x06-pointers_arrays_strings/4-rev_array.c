/**
 * reverse_array - reverses an array of integers
 *
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, j, hold;

	for (i = 0, j = n - 1 - i; i < j; i++, j--)
	{
		hold = a[i];
		a[i] = a[j];
		a[j] = hold;
	}
}
