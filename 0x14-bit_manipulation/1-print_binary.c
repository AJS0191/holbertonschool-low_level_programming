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
	int counter = 0;
	if (n >= 1024)
	{
		putchar('1');
		n -= 1024;
		counter++;
	}
	else
	{
		if (counter > 0)
		putchar('0');
	}
	if (n >= 512)
	{
		putchar('1');
		n -= 512;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 256)
	{
		putchar('1');
		n -= 256;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 128)
	{
		putchar('1');
		n -= 128;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 64)
	{
		putchar('1');
		n -= 64;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 32)
	{
		putchar('1');
		n -= 32;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 16)
	{
		putchar('1');
		n -= 16;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 8)
	{
		putchar('1');
		n -= 8;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 4)
	{
		putchar('1');
		n -= 4;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 2)
	{
		putchar('1');
		n -= 2;
		counter++;
	}
	else
	{
		if (counter > 0)
			putchar('0');
	}
	if (n >= 1)
	{
		putchar('1');
	}
	else
		putchar('0');
}
