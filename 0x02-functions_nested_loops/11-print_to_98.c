#include <stdio.h>

/**
 * print_to_98 - print all natural
 * numbers from n to 98
 *
 * Description: print numbers
 * @n : input of type int
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		int j = n;

		while (j < 98)
		{
			printf("%d, ", j);
			j++;
		}
		printf("%d", 98);
		putchar('\n');
	}
	else
	{
		int k = n;

		while (k > 98)
		{
			printf("%d, ", k);
			k--;
		}
		printf("%d", 98);
		putchar('\n');
	}
}

