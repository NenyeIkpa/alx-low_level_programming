#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: array of argument variables
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int (*get_op_func(char *s))(int, int);

	if (argc == 4)
		get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("Error\n");
	exit(98);
}
