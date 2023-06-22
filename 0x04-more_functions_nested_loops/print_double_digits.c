#include "main.h"

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
