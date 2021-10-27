#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - performs a function on each element in an array
 *
 * @action: function to be performed
 * @array: array being itterated through
 * @size: size of array
 *
 * Return:
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i; /*indexer*/

	if (array == NULL || action == NULL)
		exit(1);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
