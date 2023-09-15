#include <stdio.h>
/**
  * main - program to print numbers from 0 to 100 followed by a new line
  * but the the multiples of 3 print fiz and for 5 print buzz
  * Return: 0 always
  */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");

		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i);

		}



	}
	printf("\n");
	return (0);
}
