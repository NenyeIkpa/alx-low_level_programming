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
	int n, p, q, r, s;

	while (m < 24)
	{
		p = m / 10;
		q = m % 10;
		n = 0;
		while (n < 60)
		{
			r = n / 10;
			s = n % 10;
			_putchar('0' + p);
			_putchar('0' + q);
			_putchar(':');
			_putchar('0' + r);
			_putchar('0' + s);
			_putchar('\n');
			n++;
		}
		m++;
	}
}
