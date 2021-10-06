#include "main.h"
/**
 * print_triangle - prints # in a triangle
 * @size: how bigs the triangle
 *
 *
 * Return: VOID
 **/

void print_triangle(int size);

void print_triangle(int size)

{
	int spaces;
	int lines;
	int hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		lines = 0;
		spaces = lines;
		hashes = 0;
		while (lines < size)
		{
			while (spaces < size - 1)
			{
				_putchar(' ');
				spaces++;
			}
			if (lines == 0)
			{
				_putchar('#');
				hashes++;
				_putchar('\n');
				lines++;
				hashes = 0;
			}
			else
			{

				while (hashes <= lines)
				{
					_putchar('#');
					hashes++;
				}
				_putchar('\n');
				spaces = 0;
				hashes = 0;
				lines++;
			}
			spaces = lines;
		}
	}
}
