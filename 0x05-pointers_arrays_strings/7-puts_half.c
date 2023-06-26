#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * Description: gets half length of a string
 * (-1 from length if odd) and prints it
 * @str: input string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, count = 0, half_length;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	if (count % 2 == 0)
		half_length = count / 2;
	else
		half_length = (count - 1) / 2 + 1;

	for (i = half_length; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
