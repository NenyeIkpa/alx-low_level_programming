#include "main.h"

/**
 * print_alphabet - function that prints
 * lowercase letters.
 *
 * Description: prints by looping
 * through the values of lowercase letters
 * on the ASCII table.
 *
 * Return: void
 */

void print_alphabet(void)
{
	int letters;

	letters = 97;

	while (letters <= 122)
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
