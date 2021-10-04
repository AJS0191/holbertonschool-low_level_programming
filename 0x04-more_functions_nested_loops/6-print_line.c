#include "main.h"


/**
 * print_line - prints _ n times
 * @n: number of _
 *
 *
 * Return: VOID
 **/

void print_line(int n);

void print_line(int n)

{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('h');
	}
}
