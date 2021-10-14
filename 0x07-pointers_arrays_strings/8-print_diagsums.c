#include "main.h"
#include "doubled.c"
#include "tripled.c"
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

	while (x <= size * size)
	{
		rd += a[x];
		x += z;
	}
	if (rd > 99)
		tripled(rd);
	else if (rd > 9)
		doubled(rd);
	else if (ld < 10)
		_putchar(rd);

	x -= w;
	while (x >= size)
	{
		ld += a[x];
		x -= w;
	}
	if (rd > 99)
		tripled(rd);
	else if (rd > 9)
		doubled(rd);
	else if (ld < 10)
		_putchar(rd);
}
