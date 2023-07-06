/**
 * is_prime - checks if input is prime
 *
 * @n: given dividend
 * @divisor: given int to perform division
 *
 * Return: int
 */

int is_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime(n, divisor - 1));
}

/**
 * is_prime_number - calls is_prime
 *
 * @n: given input
 *
 * Return: int
 */

int is_prime_number(int n)
{
	return (is_prime(n, n / 2));
}
