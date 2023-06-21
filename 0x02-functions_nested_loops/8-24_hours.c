#include "main.h"

/**
 * jack_bauer - print digital time
 *
 * Description: uses loops to print a day's
 * time, digital style.
 */

void jack_bauer(void)
{
	int m = 0;
	int n;

	while (m < 24)
	{
		_putchar('0' + m);
		_putchar(':');
		n = 0;
		while (n < 60)
		{
			_putchar('0' + n);
			_putchar('\n');
			n++;
		}
		m++;
	}
	_putchar('\n');
}
