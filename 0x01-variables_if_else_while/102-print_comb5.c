#include <stdio.h>
/**
 * main - this program prints all possible combinations of two two-digits
 * Return: 0 always
 */
int main(void)
{
int r, j;
for (r = 0; r < 100; r++)
{
for (j = 0; j < 100; j++)
{
if (r < j)
{
putchar((r / 10) + 48);
putchar((r % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (r != 98 || j != 99)
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
