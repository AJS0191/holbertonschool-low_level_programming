#include "search_algos.h"

/**
 * linear_search - searches for values in int array, prints searched values
 * @array: an int array being searched
 * @size: size of int array
 * @value: value searched for
 * Return: the first index of value or -1 if it doesnt exist
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
