#include "main.h"

/**
 * print_last_digit - prints last digit of
 * any given number
 *
 * Description: converts input to
 * a string and prints the last index
 * @x: type of int
 *
 *  Return: returns int
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (y >= 0)
	{
		_putchar('0' + y);
		return (y);
	}
	else
	{
		_putchar('0' - y);
		return (-y);
	}
}
