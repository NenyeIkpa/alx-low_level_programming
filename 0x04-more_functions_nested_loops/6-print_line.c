#include "main.h"

/**
 * print_line - prints a line
 *
 * Description: prints underscore based
 * on the value of n
 * @n: input of type int
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
