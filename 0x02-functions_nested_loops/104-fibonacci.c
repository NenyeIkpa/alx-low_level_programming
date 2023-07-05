#include <stdio.h>

/**
 * printFibonacci - prints first 'count' of fibonacci numbers
 *
 * @count: given int
 *
 * Return: type of int
 */

void printFibonacci(int count)
{
	unsigned long int first = 1, second = 2, next;
	int i;

	printf("%lu, %lu, ", first, second);
	for (i = 3; i <= count; i++)
	{
		next = first + second;
		printf("%lu", next);
		if (i < count)
		printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * Return: int
 */

int main(void)
{
	printFibonacci(100);
	return (0);
}
