#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible
 * combination of two digits without repeating any digit
 * numbers regardless of arrangement. max of 5 putchar
 * functions. should be arranged in ascending order.
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (i != j && j > i)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
