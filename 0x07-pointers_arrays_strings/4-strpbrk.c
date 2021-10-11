#include "main.h"
#include "2-strlen.c"
/**
 * _strpbrk - finds the first match in a string
 *
 * @s: string being examined
 * @accept: string being compared against
 *
 * Return: returns the location of byte that matches or null if no matches
 **/

char *_strpbrk(char *s, char *accept);

char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = _strlen(s);
	int d = _strlen(accept);
	char *e;
	char **find;

	while (a < c)
	{
		if (s[a] == accept[b])
		{
			e = &s[a];
			find = &e;
			return (*find);
		}
		else
		{
			while (b < d)
			{
				if (s[a] == accept[b])
				{
					e = &s[a];
					find = &e;
					return (*find);
				}
				a++;
				b++;
			}
		}
		a++;
		b = 0;
	}
	e = '\0';
	find = &e;
	return (*find);
}
