#include <stdio.h>
/**
 * main - prints all possible combinations
 * Return: 0 always
 */
int main(void)
{
int e, m;
for (e = 49; e <= 56; e++)
{
for (m = 49; m <= 57; m++)
{
if (m > e)
{
putchar(e);
putchar(m);
if (e != 56 || m != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
