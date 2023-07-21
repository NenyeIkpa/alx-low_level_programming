#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *
 * @format: list of arg types
 *
 * Return: nothing
 *
 */

void print_all(const char * const format, ...)
{
	va_list arg_list;
	int i = 0;

	va_start(arg_list, format);
	while (i < 4)
	{
		if (format[i] == 'c')
		       printf("%c", va_arg(arg_list, int));
		if (format[i] == 'i')
			printf("%d", va_arg(arg_list, int));
		else if (format[i] == 'f')
			printf("%f", va_arg(arg_list, double));
		if (va_arg(arg_list, char *) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg_list, char *));
		i++;
	}
	putchar('\n');
	va_end(arg_list);
}
