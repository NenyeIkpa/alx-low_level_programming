#include "main.h"

/**
 * more_numbers - prints single digits 10 times
 *
 * Description: prints 0-9 10 times using loops
 */

void more_numbers(void)
{
	int max = 0, num, first, second;

	while (max < 10)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 9)
				first = num / 10;
			else
				first = num;
			second = num % 10;
			_putchar('0' + first);
			if (num > 9)
				_putchar('0' + second);
			num++;
		}
		_putchar('\n');
		max++;
	}
}
