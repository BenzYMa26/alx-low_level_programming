#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - assigns a random number to a variable
* Return: return 0 when properly executed or non zero if otherwise
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/*your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
