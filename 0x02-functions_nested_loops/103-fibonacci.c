#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all +ve numbers
 * in a fibionacci sequence below 4 million
 *
 * Return: type of int
 */

int main(void)
{
	int limit = 4000000;
	int previous = 1;
	int current = 2;
	int sum = 0;
	int next;

	while (current <= limit)
	{
		if (current % 2 == 0)
		{
			sum += current;
		}
		next = previous + current;
		previous = current;
		current = next;
	}
	printf("%d\n", sum);
	return (0);
}
