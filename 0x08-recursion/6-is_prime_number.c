/**
 * is_prime_number - checks if input is prime
 *
 * @n: given input
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2 || n == 3 || n == 5 || n == 7)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	else
		return (1);
}
