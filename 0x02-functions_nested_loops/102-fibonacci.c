#include <stdio.h>

/**
 * main - prints first 50
 * fibonacci numbers
 *
 * Description: calculate and print first
 * 50 fibonnaci numbers
 *
 * Return: type of int
 */

int main(void)
{
	int first = 1, second = 2;
	int i;
	long int next;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 50; i++)
	{
		next = first + second;
		printf("%ld", next);
		if (i < 50)
			printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
