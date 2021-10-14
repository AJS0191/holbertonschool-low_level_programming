#include "main.h"

void doubled(int c)
{
	if (c < 0)
		c = -c;
	int f = c / 10;
	int l = c % 10;

	_putchar(f + '0');
	_putchar(l + '0');
}
