#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name,
 * followed by a new line.
 * @argv:  array of varaible
 * @argx: number of variables
 * Return: the name of the program
 */

int main(int argx __attribute__((unused)), char *argv[])
{
	argx = 0;
	printf("%s \n", *argv);
	return (0);
}
