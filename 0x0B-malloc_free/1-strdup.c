#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
	char *str2 = malloc(sizeof(str) + 5);

	if (str2)
	{
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
