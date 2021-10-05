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
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 0;
		b = 0;

		_putchar('\\');
		_putchar('\n');
		a++;
		while (a < n)
		{
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
		_putchar('\\');
		_putchar('\n');
		a++;
		}
	}
}
