#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a conditional is used to check
 * if a randomly generated number is greater than 5,
 * equal to 0 or less than 6. The result of the
 * check is printed out.
 *
 * Return: returns 0
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	if (lastDigit == 0)
		 printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	if (lastDigit < 6 && lastDigit != 0)
		 printf("Last digit of %d is %d and is less than 6 and not 0\n",
				 n, lastDigit);
	return (0);
}
