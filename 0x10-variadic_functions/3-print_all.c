#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * put_c - prints char
 *
 * @ptr: arg pointer
 */

void put_c(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

/**
 * put_i - prints integer
 *
 * @ptr: arg pointer
 */

void put_i(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}

/**
 * put_f
 *
 * @ptr: arg pointer
 */

void put_f(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}

/**
 * put_s - prints string
 *
 * @ptr: arg pointer
 */

void put_s(va_list ptr)
{
	char *str;

	str = va_arg(ptr, char*);
	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

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
	print_op options[] = {
		{"c", put_c},
		{"i", put_i},
		{"f", put_f},
		{"s", put_s},
		{NULL, NULL}
	};
	va_list arg_list;
	char *separator =  "";
	int i = 0, j = 0;

	va_start(arg_list, format);
	while (format && format[i])
	{
		while (options[j].symbol)
		{
			if(*options[j].symbol == format[i])
			{
				printf("%s", separator);
				options[j].option(arg_list);
				separator = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(arg_list);
}
