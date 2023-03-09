#include "main.h"
int is_prime_help(int n, int i);
/**
 * is_prime_number - function that returns 1 if its a prime number and 0 if not
 * @n: integer input
 *
 * Return: 1 if its  prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime_help(n, 2));
	}
}

/**
 * is_prime_help - help function for is_prime_number
 * @n: integer input
 * @i: divisor to test for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_help(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_help(n, i + 1));
	}
}
