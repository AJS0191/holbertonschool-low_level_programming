#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - puts two string together
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: returns a the two string together
 **/

char *str_concat(char *s1, char *s2)
{
	int i;
	int c;
	char *new = malloc(sizeof(s1) + sizeof(s2));

	if (new)
	{
		if (s1 == NULL)
			new[0] = '\0';

		for (i = 0; s1[i] != '\0'; i++)
		{
			new[i] = s1[i];
		}
		c = i;
		if (s2 == NULL)
			new[c] = '\0';
		for (i = 0; s2[i] != '\0'; i++)
		{
			new[c] = s2[i];
			c++;
		}
		new[c] = s2[i];
		return (new);
	}
	else
		return (NULL);
}
