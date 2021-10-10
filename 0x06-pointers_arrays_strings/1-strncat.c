#include "main.h"
/**
 * _strncat - takes n bytes of src and adds it too dest
 *
 * @dest: the pointer being added to
 * @src: the pointer being added from
 * @n: amount of bytes to be added
 *
 * Return: updated dest pointer
 **/
char *_strncat(char *dest, char *src, int n);

char *_strncat(char *dest, char *src, int n)
{

	int a = _strlen(dest);
	int b = 0;
	int c = _strlen(dest);

	if (c < n)
	{
		while (src[b] != '\0')
		{
			dest[a] = src[b];
			a++;
			b++;
		}
		dest[a] = '\0';
	}
	else
		while (b < n)
		{
			dest[a] = src[b];
			a++;
			b++;
		}
	return (dest);
}
