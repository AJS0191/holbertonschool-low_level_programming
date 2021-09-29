#include "main.h"
/**
 * print_alphabet_x10 - function definition
 * VOID
 *
 * Description: prints the alphabet in lower case
 *
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char az = 'a';
	int n = 0;

	while (n <= 9)
	{
		while (az <= 'z')
		{
			_putchar(az);
			az++;
		}
		_putchar('\n');
		n++;
		az = 'a';
	}
}
