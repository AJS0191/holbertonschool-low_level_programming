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
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 0;

		while (a < n)
		{
			_putchar('_');
			a++;
		}
	}
}
