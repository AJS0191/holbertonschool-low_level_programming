#include "main.h"


/**
 * print_most_numbers - Takes an integer and returns whether it is 0 - 9.
 *
 *
 *
 * Return: VOID
 **/

void print_most_numbers(void);

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if ((i == 2) || (i == 4))
		{
			i++;
		}
		else
		{
			_putchar(i + '0');
			i++;
		}
	}
	_putchar('\n');
}
