#include <stdio.h>

/**
 * main -entry point. prints number of
 * args passed to it
 *
 * @argc: arg count
 * @argv: string array of arg values
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
