#include "main.h"
#include <stdlib.h>
/**
 * print_to_98 - prints from n numbers to 98
 * @n: number to start printing from
 * Return: 0 always
 */
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
write("%d", n);
_putchar(',');
_putchar(' ');
}
}
