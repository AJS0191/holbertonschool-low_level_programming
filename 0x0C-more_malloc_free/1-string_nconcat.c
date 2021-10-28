#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - fuction takes two strings adds n bytes of 2nd to new string
 *
 * @n: number of bytes copied
 * @s1: the first string
 * @s2: the second string
 *
 * Return: returns the combined strings
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l = strlen(s1) + n;
	char *cat;
	int c;
	unsigned int d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l = strlen(s1) + n;
	cat = malloc(sizeof(char) * l);

	if (cat == NULL)
		return (NULL);
	if (s1 != '\0')
	{
		for (c = 0; s1[c] != '\0'; c++)
		{
			cat[c] = s1[c];
		}
	}
	if (n < strlen(s2))
	{
		for (d = 0; d < n; d++)
		{
			cat[c] = s2[d];
			c++;
		}
	}
	else
	{
		for (d = 0; s2[d] != '\0'; d++)
		{
			cat[c] = s2[d];
			c++;
		}
		cat[c] = '\0';
	}

	return (cat);
}
