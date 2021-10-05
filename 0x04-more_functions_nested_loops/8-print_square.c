#include "main.h"


/**
 * print_square - prints # square n times
 * @size: number of square
 *
 *
 * Return: VOID
 **/

void print_square(int size);

void print_square(int size)

{
	int lines;
	int hash;
	size = 4;
	lines = 0;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		while (lines < size)
		{
			hash = 0;

			while (hash < size)
			{
				putchar('#');
				hash++;
			}
			putchar('\n');
			lines++;
			hash = 0;
		}
	}
}
