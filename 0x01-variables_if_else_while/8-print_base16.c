#include <stdio.h>
/**
 * main - this program will print all base16 in lowercase using putchar
 * follwed by a new line
 * Return: 0 always
 */
int main(void)
{
int no;
char al;
for (no = 48; no < 58; no++)
{
putchar(no);
}
for (al = 'a'; al <= 'f'; al++)
{
putchar(al);
}
putchar('\n');
return (0);
}
