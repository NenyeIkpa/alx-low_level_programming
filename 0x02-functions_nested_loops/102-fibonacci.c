#include <stdio.h>

/**
 * print_first_50 - prints first 50
 * fibonacci numbers
 * main - entry point
 *
 * Description: calculate and print first
 * 50 fibonnaci numbers
 *
 * Return: type of int
 */

int print_first_50(void)
{
	int first = 1, second = 2;
	int i;
	unsigned long int next;

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
