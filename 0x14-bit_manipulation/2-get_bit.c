#include "main.h"

/**
 * get_bit - gets value of bit at given index
 *
 * @n: int passed to be worked
 *
 * @index: int of index returned
 * Return: the bit or err
 */





int get_bit(unsigned long int n, unsigned int index)
{
	int bit = n >> index;
	/*if index would point to a bit that doesn't exist*/
	if (sizeof(n) * 8 < index)
		return (-1);

	if (bit & 1)
		return (1);
	else
		return (0);

}
