#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
z * in lowercase then followed by a new line
 */
void print_alphabet_x10(void)
{
char al;
int n;
n = 0;
while (n <= 10)
{
al = 'a';
while (al <= 'z')
{
_putchar(al);
al++;
}
_putchar('\n');
n++;
}
}
