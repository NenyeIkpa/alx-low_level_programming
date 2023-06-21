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
	unsigned long long int first = 1, second = 2, next;
	int i;
	
	printf("%llu, %llu, ", first, second);
	for (i = 3; i <= count; i++)
	{
		next = first + second;
		printf("%llu", next);
		if (i < count)
		printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
}

int main(void)
{
	printFibonacci(100);
	return (0);
}
