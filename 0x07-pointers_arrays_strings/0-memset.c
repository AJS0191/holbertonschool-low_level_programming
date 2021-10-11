#include "main.h"
/**
 * _memset - changes amount n bytes to byte b
 *
 * @n: number of bytes to be changed
 * @s: points to data being changed
 * @b: byte being applied
 *
 * Return: a pointer pointing to value being changed
 **/

char *_memset(char *s, char b, unsigned int n)
{
	char **s2;
	unsigned int a = 0;

	s2 = &s;
	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (*s2);
}
