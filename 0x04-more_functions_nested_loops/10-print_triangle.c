#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * Description: given an input, prints #
 * n times to form a triangle
 * @size: input n of type int
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = size;
			while (j > 0)
			{
				_putchar(' ');
				j--;
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
