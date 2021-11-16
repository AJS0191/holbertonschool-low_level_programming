#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * power - returns x to the power of y
 * @x: number being worked
 * @y: power its being taken to
 * Return: x to the power of y via recursion
 */
int power(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * power(x, y - 1));

	return (x);
}

/**
 * binary_to_uint - takes a string of binary return unsigned int
 * @b: string of 1's and 0's
 *
 * Return: converts a binary number given as a string to an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{

	char *swap = strdup(b);
	unsigned int sum = 0;
	unsigned int len = strlen(b);
	unsigned int counter = 0;
	char holder;

	for (len = strlen(b); len > 0; len--)
	{
		holder = swap[counter];
		if (b == NULL)
			return (0);
		(holder != 49 && holder != 48)
		if (holder - 48 == 1)
		{
			sum += power(2, len - 1);
		}
		counter++;
	}
	return (sum);
}
