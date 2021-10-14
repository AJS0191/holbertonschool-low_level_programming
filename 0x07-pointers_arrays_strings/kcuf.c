#include "main.h"

void kcuf(int c)
{
	int f = c / 1000;
	int g = c / 100;
	int h = g / 10;
	int s = h % 10;
	int t = g % 10;
	int l = c % 10;

	if (c < 0)
		c = -c;
	_putchar(f + '0');
	_putchar(s + '0');
	_putchar(t + '0');
	_putchar(l + '0');
}
