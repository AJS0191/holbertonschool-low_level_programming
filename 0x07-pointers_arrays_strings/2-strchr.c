#include "main.h"
#include "2-strlen.c"
/**
 * _strchr - searches for char matching c
 *
 * @s: string being searched
 * @c: character being searched for
 *
 * Return: string point to firs occurence of c if found, null if not
 **/

char *_strchr(char *s, char c);

char *_strchr(char *s, char c)
{
	int a = 0;
	char **find;
	int b = _strlen(s);
	char *d;

	if (c == '\0')
	{
		d = &s[b];
		find = &d;
		return (*find);
	}

	while (a < b)
	{
		if (s[a] == c)
		{
			d = &s[a];
			find = &d;
			return (*find);
		}
		a++;
	}
	d = '\0';
	find = &d;
	return (*find);
}
