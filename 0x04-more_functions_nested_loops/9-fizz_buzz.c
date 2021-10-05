#include <stdio.h>

/**
 * main - entry point of program
 *
 *
 * Return: void
 **/


int main(void)
{
	int soda;
	int x3;
	int x5;

	soda = 0;
	while (soda < 101)
	{
		soda++;
		x3 = soda % 3;
		x5 = soda % 5;

		if ((x3 == 0) && (x5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (x3 == 0)
		{
			printf("Fizz");
		}
		else if (x5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", soda);
		}
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
