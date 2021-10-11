#include "main.h"
/**
 * _memcpy - copies n bytes of src into dest
 *
 * @dest: string be copied into
 * @src: string being copied from
 * @n: amount of bytes to be overwritten
 *
 * Return: a pointer to dest
 **/

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **copy;
	unsigned int a = 0;

	copy = &dest;
	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (*copy);
}
