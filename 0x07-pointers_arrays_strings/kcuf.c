#include "main.h"

void kcuf(int c)
{
	int f = c / 1000;
	int g = c / 100;
	int h = g / 10;
	int s = h % 10;
	int t = g % 10;
	int u = c % 100;
	int l = c % 10;

	if (c < 0)
		c = -c;
	putchar(f + '0');
	putchar(s + '0');
	putchar(t + '0');
	putchar(l + '0');
}
