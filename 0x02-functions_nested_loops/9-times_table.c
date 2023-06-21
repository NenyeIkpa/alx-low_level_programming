#include "main.h"

/**
 * times_table - print times table from 0 - 9
 *
 * Description: loop through numbers 0 to 9
 * and multiply through
 */

void times_table(void)
{
	int i = 0, j, result, c, d;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			result = i * j;
			c = result / 10;
			d = result % 10;
			if (c == 0 && j != 0)
			{
				_putchar(' ');
			}else
			{
				_putchar(c + '0');
			}
			_putchar(d + '0');
			if (j != 9)
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

