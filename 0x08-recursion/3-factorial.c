#include "main.h"

/**
 * factorial - returns the facttorial of a given number
 * @n: given number input
 * Return: the favtorail of the given number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);

	}

	if (n <= 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
