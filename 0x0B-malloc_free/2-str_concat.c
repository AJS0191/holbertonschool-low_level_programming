#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int size = strlen(s1) + strlen(s2);
	char *new = malloc(sizeof(char) * (size + 1));

	if (new)
	{
		if (s1 == NULL)
			*s1 = "";
		if (s2 == NULL)
			*s2 = "";
		for (i = 0; s1[i] != '\0'; i++)
		{
			new[i] = s1[i];
		}

		c = i;
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
