#include <stdio.h>
#include <stdlib.h>

/**
 * get_change - prints the minimum number of coins
 * to make change for an amount of money
 *
 * amount: given int
 *
 * Return: int
 */

int get_change(int value, int cc)
{
	if (value < 0)
		printf("%d\n", 0);
	if (value == 1)
	{
		cc++;
		printf("%d\n", cc);
		return (0);
	}
	if (value >= 2 && value < 5)
	{
		cc = cc + value / 2;
		value = value % 2;
		return (get_change(value, cc));
	}
	if (value >= 5 && value < 10)
	{
		cc = cc + value / 5;
		value = value % 5;
		return (get_change(value, cc));
	}
	if (value >= 10 && value < 25)
	{
		cc = cc + value / 10;
		value = value % 10;
		return (get_change(value, cc));
	}
	cc = cc + value / 25;
	value = value % 25;
	return (get_change(value, cc));
}

/**
 * main - entry point
 *
 * @argc: arg count;
 * @argv: arg variables
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	return (get_change(atoi(argv[1]), 0));
}
