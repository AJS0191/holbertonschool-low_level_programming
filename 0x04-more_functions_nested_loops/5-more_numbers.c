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
			if (i < 10)
			{
			_putchar(i + '0');
			i++;
			}
			else
			{
				k = i \ 10;
				l = i % 10;

				_putchar(k + '0');
				_putchar(l + '0');
				i++;
			}
		}
		_putchar('\n');
		j++;
	}
}
