#include <stdio.h>
#include "main.h"

/**
 * main - a program that multipplies two numbers
 * @argc: number of arguments passed
 * @argv: array of argument passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int r;
	int a;
	int b;

	for (i = 0; i <= argc; i++)
	{
		a = argv[1];
		b = argv[2];
		r = a * b;
		printf("%d \n", r);
	}
	return (0);
}
