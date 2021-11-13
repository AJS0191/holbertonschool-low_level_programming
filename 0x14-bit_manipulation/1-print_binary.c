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
	int swap = n;
/*using bitwise to get to one digit and recursion to move forward*/
	if (swap > 1)
		print_binary(swap >> 1);
	putchar((swap & 1) + '0');
}
