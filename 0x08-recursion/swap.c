//swaps two chars
#include <stdio.h>

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}
