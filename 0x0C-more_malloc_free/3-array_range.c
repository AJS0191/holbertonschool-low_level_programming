#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - creates an array of int
 * @min: smallest num
 * @max: largest num
 * Return: array of ints
 */

int *array_range(int min, int max)
{
	int *a, i, j;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * ((max - min) + 1));
	if (a == NULL)
		return (NULL);

	j = 0;
	for (i = min; i <= max; i++)
	{
		a[j] = i;
		j++;
	}
	return (a);
}
