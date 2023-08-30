
int count_divisors(int n, int i);
/**
 * is_prime_number - checks whether n is a prime bnumber or not
 * @n: the number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (count_divisors(n, 1) == 2)
		return (1);
	else
		return (0);
}

/**
 * count_divisors - Count the number of divisors of a number
 * @n: the number
 * @i: the counter
 * Return: the number of divisors of n
 */
int count_divisors(int n, int i)
{
	if (i > n)
		return (0);
	if (n % i == 0)
		return (1 + count_divisors(n, i + 1));
	else
		return (count_divisors(n, i + 1));
}
