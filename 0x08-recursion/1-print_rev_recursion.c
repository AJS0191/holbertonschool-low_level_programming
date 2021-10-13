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
	char *s2;

	s2 = firstvoid(s);
	if (_strlen(s2) < 1)
	{
		_putchar('\n');
	}
	else
	{
		s2--;
		_putchar(s2[0]);
		s2[0] = '\0';
		_print_rev_recursion(s);
	}
}
