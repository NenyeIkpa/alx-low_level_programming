#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 *
 * @separator: separator for args
 * @n: number of args
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	char *x;

	va_start(arg_list, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(arg_list, char *);
		if (x != NULL)
		{
			printf("%s", x);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		else
			printf("(nil)");
	}
	putchar('\n');
	va_end(arg_list);
}
