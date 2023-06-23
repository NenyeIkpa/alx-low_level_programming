#include <stdio.h>

/**
 * print_fizz - prints Fizz
 *
 * Description: prints the word, Fizz
 */

void print_fizz(void)
{
	int k = 0;
	char fizz[4] = "Fizz";

	while (fizz[k] != '\0')
	{
		printf("%c", fizz[k]);
		k++;
	}
}

/**
 * print_buzz - prints Buzz
 *
 * Description: prints the word, Buzz
 */

void print_buzz(void)
{
	int k = 0;
	char buzz[4] = "Buzz";

	while (buzz[k] != '\0')
	{
		printf("%c", buzz[k]);
		k++;
	};
}

/**
 * fizz_buzz - prints numbers, Fizz, Buzz and FizzBuzz
 *
 * Description: prints Fizz for multiples of 3,
 * Buzz for multiple of 5 and FizBuzz for both
 *
 * Return: 0
 */

void fizz_buzz(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if (j % 3 == 0 && j % 5 == 0)
		{
			print_fizz();
			print_buzz();
			if (j < 99)
				putchar(' ');
		}
		else if (j % 3 == 0)
		{
			print_fizz();
			putchar(' ');
		}
		else if (j % 5 == 0)
		{
			print_buzz();
			if (j < 100)
				putchar(' ');
		}
		else
			printf("%d ", j);
	}
	putchar('\n');
}

/**
 * main - checks fizz_buzz
 *
 * Description: calls fizz_buzz function to
 * perform its task
 *
 * Return: 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
