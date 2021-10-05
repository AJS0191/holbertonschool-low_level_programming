#include "main.h"


/**
 * print_diagonal - prints \ n times
 * @n: number of \
 *
 *
 * Return: VOID
 **/

void print_diagonal(int n);

void print_diagonal(int n)

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
			_putchar(' ');
			a++;
		}
		_putchar('\\');
		_putchar('\n');
	}
}
