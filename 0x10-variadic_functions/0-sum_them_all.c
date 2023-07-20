#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all arguments
 *
 * @n: unsigned int param
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	signed int i, x, y, sum;

	if (n == 0)
		return (0);
	va_start(arg_list, n);
	y = n;
	for (i = 0; i < y; i++)
	{
		x = va_arg(arg_list, signed int);
		sum += x;
	}
	va_end(arg_list);
	return (sum);
}
