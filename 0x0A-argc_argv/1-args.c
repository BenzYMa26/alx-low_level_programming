#include <stdio.h>
#include "main.h"
/**
 * main - a program that prints the number of arguments
 * passed to it, followed by a new line
 * @argx: number of varaiables
 * @argv: array of argument
 * Return: returns 0
 */

int main(int argx, char *argv[]__attribute__((unused)))
{
	printf("%d \n", (argx - 1));
	return (0);
}
