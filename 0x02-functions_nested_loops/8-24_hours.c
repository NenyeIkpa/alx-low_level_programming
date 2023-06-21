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
	int n,p,q;

	while (m < 24)
	{
		p = m / 10;
		q = m % 10;
		_putchar('0' + p);
		_putchar('0' + q);
		_putchar(':');
		n = 0;
		while (n < 60)
		{
			p = n / 10;
			q = n % 10;
			_putchar('0' + p);
			_putchar('0' + q);
			_putchar('\n');
			n++;
		}
		m++;
	}
	_putchar('\n');
}
