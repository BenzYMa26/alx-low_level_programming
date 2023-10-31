#include "main.h"
#include <stdio.h>
/**
 * whatsmyname - program that prints its name,
 * followed by a new line.
 * @argvv:  array of varaiable
 * Return: the name of the program
 */

int main (int argx __attribute__((unused)), char * argv[])
{
	argx = 0;
	printf("%s \n", argv[0]);
	return (0);
}
