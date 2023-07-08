#include <stdio.h>
#include <stdlib.h>

/**
 * get_change - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @value: given int
 * @cc: count of type int
 *
 * Return: int
 */

int get_change(int value, int cc)
{
	if (value == 1)
	{
		cc++;
		return (cc);
	}
	if (value >= 2 && value < 5)
	{
		cc = cc + value / 2;
		if (value / 2 == 0)
			return (cc);
		value = value % 2;
		return (get_change(value, cc));
	}
	if (value >= 5 && value < 10)
	{
		cc = cc + value / 5;
		if (value / 5 == 0)
			return (cc);
		value = value % 5;
		return (get_change(value, cc));
	}
	if (value >= 10 && value < 25)
	{
		cc = cc + value / 10;
		if (value / 10 == 0)
			return (cc);
		value = value % 10;
		return (get_change(value, cc));
	}
	cc = cc + value / 25;
	if (value / 25 == 0)
		return (cc);
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
	int value;

	value = atoi(argv[1]);
	if (argc < 2 || value < 0)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", get_change(value, 0));
	return (0);
}
