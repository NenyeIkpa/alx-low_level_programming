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
			if (num < 10)
				_putchar('0' + num);
			else
			{
				first = num / 10;
				second = num % 10;
				_putchar('1' + first + second);
			}
			num++;
		}
		_putchar('\n');
		max++;
	}
}
