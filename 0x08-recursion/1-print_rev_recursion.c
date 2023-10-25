#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - this function will print strings in reverse
 * @s: the string to be printed
 * Return: new line
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}

}
