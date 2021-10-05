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

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}
