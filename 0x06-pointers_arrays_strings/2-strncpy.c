#include "main.h"
#include "2-strlen.c"
/**
 * _strncpy - copies n bytes of src into the beginning
 *
 * @dest: string being copied into
 * @src: string being copied
 * @n: amount of bytes to be copied
 *
 * Return: modified dest string
 **/

char *_strncpy(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int c = _strlen(src);

	if (c < n)
	{
		while (b < c)
		{
			dest[a] = src[b];
			a++;
			b++;
		}
		while (b < c)
		{
			dest[a] = '\0';
			a++;
			b++;
		}
	}
	while (b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
