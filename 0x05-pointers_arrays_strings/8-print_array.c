#include "main.h"
#include <stdio.h>
/**
 * print_array - prints a number of items stored in array
 *
 * @a: array being called
 * @n: number of items to print
 * RETURN: VOID
 **/

void print_array(int *a, int n);

void print_array(int *a, int n)
{
	int counter = 0;

	if (n <= 0)
	{
		_putchar('\n');
		counter = n;
	}
	while (counter <= n - 1)
	{
		if (counter != n - 1)
		{
			printf("%d, ", *a);
			a++;
			counter++;
		}
		else
		{
			printf("%d\n", *a);
			a++;
			counter++;
		}
	}
}
