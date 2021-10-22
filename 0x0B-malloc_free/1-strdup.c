#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - duplicates a string
 *
 * @s: the string to be duplicated
 *
 * Return: returns a duplicate of the string or null
 **/
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	c++;
	return (c);
}

/**
 * _strdup - duplicates a string
 *
 * @str: the string to be duplicated
 *
 * Return: returns a duplicate of the string or null
 **/

char *_strdup(char *str)
{
	int i;
	int s;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	s = _strlen(str);
	str2 = malloc(sizeof(char) * s);

	if (str2)
	{
		if (str == NULL)
		{
			free(str2);
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			str2[i] = str[i];
		}
		str2[i] = str[i];
		return (str2);
	}
	else
	{
		free(str2);
		return (NULL);
	}
}
