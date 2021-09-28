#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point, contains program.
 *
 * Contains program that gives random numbers and checks if they are positive,
 *  negative, or zero
 *
 * Return - function should return zero upon success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is 0", n);
	}
	return (0);
}
