#include <stdio.h>
/**
 * main - thsi program will print alphabets in owercese reverse order
 * follwed by a new line
 * Return: will always return 0
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
