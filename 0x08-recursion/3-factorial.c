#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: given number input
 * Return: -1 to show an error or return the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
