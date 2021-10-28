#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 *
 * @array: the array being searched
 * @size: the size of the array
 * @cmp: function to compare values
 *
 * Return: type int
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* index */

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		exit(1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
