#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * @a: array being reversed
 * @n: number of elements in the array
 *
 * RETURN: void
 **/

void reverse_array(int *a, int n);

void reverse_array(int *a, int n)
{
	int b = 0;
	int c = 0;
	int ra[100];

	while (b < n)
	{
		ra[b] = a[b];
		b++;
	}
	b--;
	while (b >= 0)
	{
		a[c] = ra[b];
		b--;
		c++;
	}
}
