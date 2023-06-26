#include "main.h"
#include <stdio.h>
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
	int count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	for (i = 0; i < count; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
