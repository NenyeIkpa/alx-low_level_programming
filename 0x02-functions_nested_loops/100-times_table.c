#include "main.h"

/**
 * print_times_table - print times table n times
 *
 * Description: print multipliation table
 * n times based on input n
 * @n: input of type int
 *
 * Return: type of int
 */

void print_times_table(int n)
{
	int i = 0, j, result, c, d, e;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				result = i * j;
				if (result > 99)
				{
					c = result / 100;
					d = (result - 100) / 10;
					e = (result - 100) % 10;
				}
				else
				{
					c = result / 10;
					d = result % 10;
				}
				if ((c != 0 && d != 0) || (c > 0 && d == 0))
				{
					if (result < 100)
					{
						_putchar(' ');
					}
					_putchar('0' + c);
					_putchar(d + '0');
					if (result > 99)
						_putchar(e + '0');
				}
				else
				{
					if (j == 0)
					{
						_putchar(d + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(d + '0');
					}
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
