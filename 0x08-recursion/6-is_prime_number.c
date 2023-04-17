#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: input number
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}

/**
 * is_prime - recursive helper function for is_prime_number
 * @n: input number
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i + 1));
}
