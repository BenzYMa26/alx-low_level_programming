#include <stdio.h>
#include "main.h"

int sq_numbers(int y, int r);

/**
 * _sqrt_recursion - return the square root of n
 * @n: the number input
 * Return: -1 if n does not have natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sq_numbers(0, n));
	}
}

/**
 * sq_numbers - returns the squares of a number
 * @y: the number to be squared
 * @n: square of the number
 * Return: y when done or -1
 */

int sq_numbers(int y, int n)
{
	if (y * y > n)
	{
		return (-1);
	}
	if (y * y == n)
	{
		return (y);
	}
	return (sq_numbers(++y, n));
}
