#include "main.h"

/**
 * more_numbers - prints single digits 10 times
 *
 * Description: prints 0-9 10 times using loops
 */

void more_numbers(void)
{
	int max = 0, num;

	while (max <= 10)
	{
		num = 0;
		while (num < 15)
		{
			if ( num < 10)
				_putchar('0' + num);
			else
				print_double_digits(num);
			num++;
		}
		_putchar('\n');
		max++;
	}
}

/**
 * print_double_digits - prints double digits
 *
 * Description: prints double digits using
 * _putchar
 *
 * Return: 0
 */

int print_double_digits(int num)
{
       	int first, second;

	first = num / 10;
	second = num % 10;
	_putchar('0' + first);
	_putchar('0' + second);
	return (0);
}
