#include "main.h"

/**
 * print_alphabet_x10 - prints lowecase letters ten times
 *
 * Description: using while loop to print lowercase letters 10 times
 */

void print_alphabet_x10(void)
{
	int x;
	char y;

	x = 0;

	while (x < 10)
	{
		y = 'a';
		while (y <= 'z')
		{
			_putchar(y);
			y++;
		}
		_putchar('\n');
		x++;
	}
}
