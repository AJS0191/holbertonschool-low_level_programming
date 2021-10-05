#include "main.h"


/**
 * print_square - prints # square n times
 * @n: number of square
 *
 *
 * Return: VOID
 **/

void print_square(int n);

void print_square(int n)

{
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
