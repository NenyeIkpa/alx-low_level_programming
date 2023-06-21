#include <stdio.h>

/**
 * main - entry point
 * print_first_50 - prints first 50
 * fibonacci numbers
 *
 * Description: calculate and print first
 * 50 fibonnaci numbers
 *
 * Result: type of int
 */

int print_first_50(void)
{
	int first = 1, second = 2;
	int i;
	unsigned long int next, total;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		printf("%lu", next);
		if (i < 50)
			printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}

int main(void)
{
	print_first_50();
	return (0);
}
