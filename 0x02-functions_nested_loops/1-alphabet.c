#include "main.h"
/**
 * print_alphabet - entry point to program
 * VOID
 *
 * Description: prints the alphabet in lower case
 *
 *
 * Return: void
 */

void print_alphabet(void)
{
	char az = 'a';

	while (az <= 'z')
	{
		_putchar(az);
		az++;
	}
	_putchar('\n');
}
