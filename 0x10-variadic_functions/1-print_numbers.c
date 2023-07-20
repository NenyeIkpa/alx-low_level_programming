#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: char * constant
 * @n: unsigned int constant
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	signed int i;

	va_start(arg_list, n);
	for (i = n; i >= 0; i = va_arg(arg_list, signed int))
	{
		if (separator == NULL)
			printf("%d", i);
		else
			printf("%d%s", i, separator);
	}
	putchar('\n');
	va_end(arg_list);
}
