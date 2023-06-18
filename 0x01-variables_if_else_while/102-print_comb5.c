#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible combinations
 * of two digit numbers with no duplicates using
 * a max of 8 putchar functions and no char types
 *
 * Return: returns 0
 */

int main(void)
{
	int num1, num2;

	num1 = 0;
	num2 = num1 + 1;

	while (num1 < 100)
	{
		while (num2 < 100)
		{
			putchar('0' + num1 / 10);
			putchar('0' + num1 % 10);
			putchar(' ');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);
			if (num1 < 98)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
		num2 = num1 + 1;
	}
	putchar('\n');
	return (0);
}
