#include "main.h"
/**
 * swap_int - takes to ints and swaps value
 *
 * @a:first to be swapped
 * @b:swapped with a
 *
 * RETURN: void
 **/

void swap_int(int *a, int *b);

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
