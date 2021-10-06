#include "main.h"
/**
 * print_rev - takes a string and prints in reverse
 *
 * @s: string to be printed
 *
 * RETURN: VOID
 **/

void print_rev(char *s);

void print_rev(char *s)
{
	int a = 0;
	int counter = 0;
	int b;

	while (counter <= a)
	{
		if (s[a] != '\0')
		{
			a++;
		}
		else if (s[a] == '\0')
		{
			a--;
			b = a;
			counter = a + 2;
		}
	}
	counter = b;

	while (counter >= b)
	{
		if (b >= 0)
		{
			_putchar(s[b]);
			b--;
		}
		else
		{
			_putchar('\n');
			counter = b - 1
				}
	}
}
