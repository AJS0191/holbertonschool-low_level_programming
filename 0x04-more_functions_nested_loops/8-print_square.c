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
	int lines;
	int hash;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (lines < n)
		{
			hash = 0;

			while (hash < n)
			{
				_putchar('#');
				hash++;
			}
			_putchar('\n');
			lines++;
			hash = 0;
		}
	}
}
