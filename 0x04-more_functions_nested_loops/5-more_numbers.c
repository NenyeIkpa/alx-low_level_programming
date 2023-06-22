#include "main.h"

/**
 * more_numbers - prints single digits 10 times
 *
 * Description: prints 0-9 10 times using loops
 */

void more_numbers(void)
{
	int max = 0, num = 0;

	while (max <= 10)
	{
		while (num < 15)
		_putchar('0' + num);
	}
	_putchar('\n');
	max++;
}

