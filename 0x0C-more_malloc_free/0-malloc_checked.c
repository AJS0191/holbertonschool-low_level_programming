#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - mallocs with input and checks for its success
 *
 * @b: unsigned int used to malloc
 *
 * Return: returns void * or 98 error
 **/

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
