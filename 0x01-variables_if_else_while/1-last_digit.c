#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - this program will assign a random number
 * to the variable to print the last digit of the
 * number stored in the varaible n
 * Return: 0 when it runs properly or non zero if otherwise
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d is %d ", n, n % 10);
if (n % 10 > 5)
{
printf("and is greater than 5\n");
}
else if (n % 10 == 0)
{
printf("and is 0\n");
}
else if (n % 10 < 6)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
