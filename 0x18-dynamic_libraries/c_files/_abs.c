#include "main.h"

/**
 * _abs - prints absolute value of an integer
 *
 * Description: divides input by -1 and prints
 * the result.
 * @a: type of int
 *
 * Return: returns 0
 */

int _abs(int a)
{
	int b;

	if (a  < 0)
	{
		b = a / -1;
	}
	else
	{
		b = a;
	}
	return (b);
}
