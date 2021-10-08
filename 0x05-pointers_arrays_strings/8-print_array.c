#include "main.h"
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

	while (counter <= n)
	{
		if (counter != n)
		{
			printf("%d,", a[n]);
			n++;
		}
		else
		{
			printf("%d\n", a[n]);
			n++;
		}
	}
}
