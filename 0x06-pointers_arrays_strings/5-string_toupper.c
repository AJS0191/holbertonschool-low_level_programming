#include "main.h"
#include "2-strlen.c"
/**
 * string_toupper - changes lowercase characters in string to uppercase
 *
 * @s: string to be modified
 *
 * Return: string
 **/

char *string_toupper(char *s);

char *string_toupper(char *s)
{
	int  a = _strlen(s);
	int b = 0;
	int c = 0;

	while (b < a)
	{
		if ((s[b] + 0 > 97) && (s[b] + 0 < 123))
		{

			c = s[b] - '0';
			c = c - 32;
			s[b] = c + '0';
			b++;
		}
		else
		{
			b++;
		}
	}
	return (s);
}
