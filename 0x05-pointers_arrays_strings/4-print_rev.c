#include "main.h"

/**
 * print_rev - prints string in reverse order
 *
 * Description: reverses input string and prints to
 * stdout using _putchar function
 * @s: input of type string
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = count - 1; s[i] != '\0'; i--)
		_putchar(s[i]);

	_putchar('\n');
}
