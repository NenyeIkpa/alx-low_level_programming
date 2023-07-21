#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct prints - prints anything
 *
 * @s: symbol of data type
 * @option: function that handles printing
 */
typedef struct prints
{
	char *symbol;
	void (*option)(va_list a);
} print_op;

#endif
