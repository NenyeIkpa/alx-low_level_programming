#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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
	char x;
	char chr;
	int num;
	float fl;
	char * str;

	va_start(arg_list, format);
	while ((x = format[i++]) != 0)
	{
		if (x == 'c')
		{
			chr = va_arg(arg_list, int);
		       printf("%c ", chr);
		}
		else if (x == 'i')
		{
			num = va_arg(arg_list, int);
			printf("%d ", num);
		}
		else if (x == 'f')
		{
			fl = va_arg(arg_list, double);
			printf("%f ", fl);
		}
		else if (x == 's')
		{
			str = va_arg(arg_list, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s ", str);
		}
	}
	putchar('\n');
	va_end(arg_list);
}
