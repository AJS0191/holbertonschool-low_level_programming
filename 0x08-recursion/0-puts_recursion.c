#include "main.h"
/**
 * _puts_recursion - prints a string
 *
 * @s: string being printed
 *
 * Return: VOID
 **/
void _puts_recursion(char *s);

void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
