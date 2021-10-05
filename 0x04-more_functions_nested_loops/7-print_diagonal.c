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
		lines = 0;
		spaces = 0;

		while (lines < n)
		{
			if (lines == 0)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				while (spaces < lines)
				{
					_putchar(' ');
					spaces++;
				}
				_putchar('\\');
				_putchar('\n');
				spaces = 0;
				lines++;
			}
		}
	}
}
