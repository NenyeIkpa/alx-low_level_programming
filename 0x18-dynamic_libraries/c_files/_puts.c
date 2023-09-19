#include "main.h"

/**
 * _puts - prints a string
 *
 * Description: prints input to stdout
 * using function _putchar
 * @str: input of type char
 *
 * Return: nothing
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
