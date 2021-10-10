#include "main.h"
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



	while (b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
