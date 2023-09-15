#include "main.h"
/**
  * more_numbers - function that prints 10 times the numbers from 0 to 14
  *followed by a new line
  */
void more_numbers(void)
{
int i;
int a;

for (a = 0; a <= 10; a++)
{
	for (i = 0; i < 15; i++)
	{
		_putchar(i + '0');
	}
}
_putchar('\n');
}
