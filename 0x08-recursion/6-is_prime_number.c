#include "main.h"

int primef(int n, int i);

/**
 * is_prime_number - says if an interger is a prime number
 * @n: number to check
 * Return: 1 if prime or 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (primef(n, n - 1));
}

/**
 * primef - check if a number is prime
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime or 0 if not
 */
int primef(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (primef(n, i - 1));
}
