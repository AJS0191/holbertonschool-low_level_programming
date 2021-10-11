#include "main.h"
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
	int  a = strlen(s);
	int b = 0;

	while (b < a)
	{
		if ((s[b] + 0 > 97) && (s[b] + 0 < 123))
		{

			s[b] = s[b] - '32';
			b++;
		}
		else
		{
			b++;
		}
	}
	return (s);
}
