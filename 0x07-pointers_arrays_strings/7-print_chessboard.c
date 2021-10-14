#include "main.h"
/**
 * print_chessboard - prints an array size 8x8
 *
 * @a: array being printed
 *
 * Return: VOID
 **/

void print_chessboard(char (*a)[8])
{
	int x;
	int y = 0;

	for (x = 0; x < 8; x++)
	{
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		_putchar('\n');
		y = 0;
	}
}
