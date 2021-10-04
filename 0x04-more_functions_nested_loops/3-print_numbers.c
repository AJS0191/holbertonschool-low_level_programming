#include "main.h"
#include <stdio.h>

/**
 * print_number - Takes an integer and returns whether it is 0 - 9.
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
	}
	_putchar('\n');
	return (void);
}
