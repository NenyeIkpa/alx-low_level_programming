#include "main.h"

/**
 * puts2 - prints every other character
 *
 * Description: beginning ith the first, print every other
 * character in a string
 * @str: string input
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
