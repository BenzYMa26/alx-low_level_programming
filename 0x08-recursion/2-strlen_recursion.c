#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - gives the length of a stirng
 * @s: string to be printed
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(++s));
	}

}