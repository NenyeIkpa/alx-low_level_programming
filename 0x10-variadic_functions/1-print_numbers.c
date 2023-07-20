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
	unsigned int i;
	signed int x;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg_list, signed int);
		if (separator == NULL)
			printf("%d", x);
		else
			printf("%d%s", x, separator);
	}
	if (separator != NULL)
		printf("%d", i);
	putchar('\n');
	va_end(arg_list);
}
