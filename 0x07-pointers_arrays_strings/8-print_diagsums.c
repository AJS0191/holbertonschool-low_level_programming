#include "main.h"
#include "doubled.c"
#include "tripled.c"
#include "kcuf.c"
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
	if (rd < 0)
		_putchar('-');
	if (rd > 999)
		kcuf(rd);
	else if (rd > 99 || rd < -99)
		tripled(rd);
	else if (rd > 9)
		doubled(rd);
	else if (ld < 10)
		_putchar(rd);
	_putchar('\n');

	x = t - w;
	while (x >= w)
	{
		ld += a[x];
		x -= w;
	}
	if (ld < 0)
		_putchar('-');
	if (ld > 999 || ld < -999)
		kcuf(ld);
	else if (ld > 99 || ld < -99)
		tripled(ld);
	else if (ld > 9 || ld < -9)
		doubled(ld);
	else if (ld < 10 || ld < 0)
		_putchar(ld);
	_putchar('\n');
}
