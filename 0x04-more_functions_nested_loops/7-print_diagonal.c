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

		while (a < n)
		{
			_putchar('\\');
			_putchar('\n');
			a++;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
		}
	}
}
