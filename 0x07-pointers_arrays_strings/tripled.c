#include "main.h"
void tripled(int c)
{
	int f = c / 100;
	int g = c / 10;
	int m = g % 10;
	int n = c % 100;
	int l = n % 10;

	if (c < 0)
		c = -c;
	_putchar(f + '0');
	_putchar(m + '0');
	_putchar(l + '0');
}
