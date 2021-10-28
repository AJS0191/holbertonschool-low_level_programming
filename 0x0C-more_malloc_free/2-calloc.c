#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory and sets it to 0
 *
 * @nmemb: number of elements
 * @size: the size of the elements
 *
 * Return: returns a void pointer to that memory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	int *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (size > sizeof(int))
	{
		c = malloc(nmemb * size);
	}

	else
	{
		c = malloc(nmemb * sizeof(int));
	}

	if (c == NULL)
		return (NULL);
	for (a = 0; a < nmemb; a++)
		c[a] = 0;

	return (c);
}
