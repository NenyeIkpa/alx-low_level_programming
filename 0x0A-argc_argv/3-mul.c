#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point. returns the product of two numbers
 *
 * @argc: arg count
 * @argv: arg variables
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
