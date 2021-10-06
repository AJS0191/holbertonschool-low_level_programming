#include "main.h"
/**
 * _strlen - takes a string and return its length
 *
 * @s: string to be counted
 *
 * Return: returns the length of s
 **/
int _strlen(char *s);

int _strlen(char *s)
{
	int a = 0;
	int counter = 0;

	while (counter <= a)
	{
		if (s[a] != '\0')
		{
			a++;
		}
		else if (s[a] == '\0')
		{
			return (a);
		}
		counter++;
	}
}
