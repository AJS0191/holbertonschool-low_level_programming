#include "main.h"

void doubled(int c)
{
	int f = c / 10;
	int l = c % 10;

	if (c < 0)
		c = -c;
	_putchar(f + '0');
	_putchar(l + '0');
}
