#include "main.h"

/**
 * more_numbers - prints 1 - 14 ten times.
 *
 *
 *
 * Return: VOID
 **/

void more_numbers(void);

void more_numbers(void)
{
	int i;
	int j;
	int k;
	int l;

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			k = i / 10;
			l = i % 10;
			if (i > 9)
			{
			_putchar(k + '0');
				i++;
			}
			else
			{
				i++;
			}
		_putchar(l + '0');
		}
		_putchar('\n');
		j++;
	}
}
