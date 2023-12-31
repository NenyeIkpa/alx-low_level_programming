/**
 * _sqrt - calculates the natural square root of a number
 *
 * @n: given number
 * @head: an int that is initialized at 0
 * @tail: an int that is initialized at n
 *
 * Return: int
 */

int _sqrt(int n, int head, int tail)
{
	int mid;
	long int num = n, mid_sq;

	if (head > tail)
		return (-1);
	mid = head + (tail - head) / 2;
	mid_sq = mid * mid;

	if (mid_sq == num)
		return (mid);
	else if (mid_sq > num)
		return (_sqrt(n, head, mid - 1));
	else
		return (_sqrt(n, mid + 1, tail));
}

/**
 * _sqrt_recursion - returns the natural square root
 * of a number
 *
 * @n: given number
 *
 * Return: natural square root if it exists or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0, n));
}
