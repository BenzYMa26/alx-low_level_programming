#include <stdio.h>
/**
 * main - this progam will print all possible combinations of single digits
 * Return: 0 always
 */
int main(void)
{
int no;
for (no = 48; no < 58; no++)
{
putchar(no);
if (no != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
