#include <stdlib.h>

/**
 * print_name - prints a name
 *
 * @name: given name
 * @f: function parameter
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}
