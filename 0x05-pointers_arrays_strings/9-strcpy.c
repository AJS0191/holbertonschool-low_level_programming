#include "main.h"
/**
 * _strcpy - copies a string
 *
 * @src: string to be copied
 * @dest: string to be copied
 *
 * Return: char *
 **/

void _strcpy(char *dest, char *src)
{
	int a = 0;
	int counter = 0;
	int b;
	char rts[500] = "";

	while (counter <= a)
	{
		if (src[a] != '\0')
		{
			rts[a] = src[a];
		}
		else if (s[a] == '\0')
		{
			rts[a] = src[a];
			b = a;
			counter = a++;
		}
	}
	a = 0;

	while (a <= b)
	{
		dest[a] = rts[a];
		a++;
	}
	return (dest);
}
