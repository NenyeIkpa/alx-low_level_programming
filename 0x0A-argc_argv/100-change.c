#include <stdio.h>
#include <stdlib.h>

/**
 * get_divisor - returns the divisor for a given number
 *
 * @value: given number
 *
 * Return: int
 */

int get_divisor(int value)
{
	int divisor;

	if (value > 24)
		divisor = 25;
	if (value >= 10 && value <= 24)
		divisor = 10;
	if (value >= 5 && value <= 9)
		divisor = 5;
	if (value >= 2 && value <= 4)
		divisor = 2;
	if (value == 1)
		divisor = 1;
	return (divisor);
}

/**
 * get_change - prints the minimum number of coins
 * to make change for an amount of money
 *
 * @value: given int
 * @cc: count of type int
 * @divisor: denominator of type int
 *
 * Return: int
 */

int get_change(int value, int cc, int divisor)
{
	if (value == 1)
	{
		cc++;
		return (cc);
	}
	cc = cc + value / divisor;
	if (value / divisor == 0)
		return (cc);
	value = value % divisor;
	return (get_change(value, cc, get_divisor(value)));
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

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
		return (printf("%d\n", 0));
	printf("%d\n", get_change(value, 0, get_divisor(value)));
	return (0);
}
