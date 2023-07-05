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
		for (i = size; i < 0; i--)
		{
			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
