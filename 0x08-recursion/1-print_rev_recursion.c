#include "main.h"
#include "2-strlen.c"
#include "firstvoid.c"
/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string being printed
 *
 * RETURN: VOID
 **/

void _print_rev_recursion(char *s)
{
	int a = _strlen(s);
	if (a > 0)
	{
		s = s + a;
		_putchar(s[0]);
		s[0] = '\0';
		s = s - a;
		_print_rev_recursion(s);
	}
}
