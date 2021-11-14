#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *set_bit - sets bit to 1
 * @index: bit being worked
 * @n: number being passed
 * Return: new number or err
 */
int set_bit(unsigned long int *n, unsigned int index)
{


	*n = (1 << 6) | *n;
	if (sizeof(n) * 8 < index)
		return (-1);
	return (1);
}
