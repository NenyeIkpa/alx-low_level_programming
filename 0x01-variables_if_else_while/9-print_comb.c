#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible
 * combinations of single-digit numbers
 * separated by a comma and then space using
 * putchar a max of 4 times. can't use char type
 *
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i == 9)
			putchar('\n');
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
