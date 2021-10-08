#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: first half of new string
 * @src: second half of new string
 *
 * Return: returns a new pointer string
 **/
char *_strcat(char *dest, char *src);

char *_strcat(char *dest, char *src)
{
	char cat[500];
	char *kitty = cat;
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		cat[a] = dest[a];
		a++;
	}
	while (src[b] != '\0')
	{
		cat[a] = src[b];
		a++;
		b++;
	}
	cat[a] = '\0';
	return (kitty);
}
