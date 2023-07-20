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
	unsigned int i, x;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg_list, signed int);
		printf("%d", x);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(arg_list);
}
