#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Description: using a loop prints 0 to 9
 */

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
