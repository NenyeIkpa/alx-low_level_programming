#include <stdio.h>
/**
 * main - entry point
 *
 * Description: sums up
 * multiples of 5 and 3
 * below 1024
 *
 * Return: int
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			i++;
		}
	}
	printf("%d", sum);
	return (0);
}
