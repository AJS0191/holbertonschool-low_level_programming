#include "main.h"
#include "2-strlen.c"
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

	int a = _strlen(dest);
	int b = 0;


	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';

	return (dest);
}
