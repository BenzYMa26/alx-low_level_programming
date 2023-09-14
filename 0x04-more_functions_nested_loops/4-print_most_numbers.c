#include "main.h"
/**
  * print_most_numbers - function that prints numbers from 0 to 9
  *followed by a new line
  */
void print_most_numbers(void)
{
int a = 0;
int i;
for (i = a; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i);
}
}
_putchar('\n');
}
