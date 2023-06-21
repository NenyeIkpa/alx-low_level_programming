#include <stdio.h>

/**
 * main -entry point
 *
 * Desciption: prints first 98 fibonacci numbers
 *
 * Return: type of int
 */

void printFibonacci(int count)
{
	int first = 1, second = 2;
	int i, next;
	
	printf("%d, %d\n", first, second);
	for (i = 3; i <= count; i++)
	{
		next = first + second;
		printf("%d", next);
		if (i < count)
		printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
}

int main(void)
{
	printFibonacci(98);
	return (0);
}
