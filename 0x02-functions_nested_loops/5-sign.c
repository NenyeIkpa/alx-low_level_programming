#include "main.h"

/**
 * print_sign - checks integer value and prints designated sign
 *
 * Description: use if else statement to print sign based on value
 * of expression
 * @n: type of int
 *
 * Return: type of int.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
