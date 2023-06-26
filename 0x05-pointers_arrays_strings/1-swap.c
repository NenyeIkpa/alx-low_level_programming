/**
 * swap_int - swaps the value of two integers
 *
 * Description: updates the value of a to b and b to that of a
 * @a: integer 1, type int
 * @b: integer 2, type int
 *
 * Return: returns nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
