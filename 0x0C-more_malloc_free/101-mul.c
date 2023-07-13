#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two positive numbers
 *
 * @argc: argv count
 * @argv: argument variables
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
