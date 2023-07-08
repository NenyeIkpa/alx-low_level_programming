#include <stdio.h>
#include <stdlib.h>

/**
 * main -entry point. sums all positive numbers
 *
 * @argc: arg count
 * @argv: arg variables
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, int_value = 0, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			int_value = atoi(argv[i]);
			if (int_value >= 0)
				sum += int_value;
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}
		return (0);
}
