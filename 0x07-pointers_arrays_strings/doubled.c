#include "main.h"

void doubled(int c)
{
	int f = c / 10;
	int l = c % 10;

	_putchar(f + '0');
	_putchar(l + '0');
}
