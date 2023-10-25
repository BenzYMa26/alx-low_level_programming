#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x to the power of y
 * @x: base/given number
 * @y: power number
 * Return: -1 if y is lower than 0 or the value
 * of x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
