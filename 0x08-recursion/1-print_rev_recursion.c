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
		_putchar(s[a]);
		s[a] = '\0';
		_print_rev_recursion(s);
	}
}
