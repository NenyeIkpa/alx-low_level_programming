/**
 * print_name - prints a name
 *
 * @name: given name
 * @f: function parameter
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
