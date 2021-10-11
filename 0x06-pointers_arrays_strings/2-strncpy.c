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
	int d = _strlen(dest);

	if (c < n)
	{
		while (b <= c)
		{
			dest[a] = src[b];
			a++;
			b++;
		}
		while (b < n)
		{
			dest[a] = '\0';
			a++;
			b++;
		}
		return(dest);
	}
	else
	{
		while (b < n)
		{
			dest[a] = src[b];
			a++;
			b++;
		}
		return (dest);
	}
}
