#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of both diagonals
 *
 * @a: array being called
 * @size: size of the array
 *
 * RETURN: void
 **/

void print_diagsums(int *a, int size)
{
	int x = 0;
	int ld = 0;
	int rd = 0;
	int z = size + 1;
	int w = size - 1;
	int v = size * size;
	int t = v - 1;

	while (x <= v - 1)
	{
		rd += a[x];
		x += z;
	}
	printf("%d\n", rd);

	x = t - w;
	while (x >= w)
	{
		ld += a[x];
		x -= w;
	}
	printf("%d\n", ld);
	_putchar('\n');
}
