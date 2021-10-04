#include "main.h"


/**
 * print_numbers - Takes an integer and returns whether it is 0 - 9.
 *
 *
 *
 * Return: VOID
 **/

void print_numbers(void);

void print_numbers(void)

{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
