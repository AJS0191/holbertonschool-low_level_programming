#include "main.h"
#include "2-strlen.c"
/**
 * _strcmp - compares 2 strings
 *
 * @s1: first string being compared
 * @s2: second string being compared
 *
 * Return: returns 0 if the same - if str1 larger + vice versa
 **/
int _strcmp(char *s1, char *s2);

int _strcmp(char *s1, char *s2)
{
	int a = _strlen(s1);
	int b = _strlen(s2);
	int c = 0;
	int d;
	int e;

	if (a > b)
		d = a;
	else
		d = b;

	while (c < d)
	{
		e = s1[c] - s2[c];
		if (b ==0)
		{
			a++;
			continue;
		}
		else
		{
			return (e);
		}
	}
	return (e);
}
