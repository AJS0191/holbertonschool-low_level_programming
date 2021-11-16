#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *print_binary - takes an int and prints a binary representation
 * @n: int being printed
 *
 * Return: converts a binary number given as a string to an unsigned int
 */

void print_binary(unsigned long int n)
{
	unsigned long int swap = n;
	/*using bitwise to get to one digit and recursion to move forward*/
	if (swap > 1)
		print_binary(swap >> 1);
	putchar((swap & 1) + '0');
}
#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip one to another
 * @n: 1st number to compare
 * @m: number being copared to
 * Return: number of bits needed to flip numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int exor = n ^ m;
	/*exor now contains the same amount of columns as bits being swapped*/

	while (exor > 0)
	{
		i++;
		/* sets exor equal to the value of exor & exor - 1 */
		exor &= (exor - 1);
		/* which basically is removing one column from the right until*/
	}
      /*exor equals zero,the number of times this happens is the bitsswitched*/
	return (i);
}
