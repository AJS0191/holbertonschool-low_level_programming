#include "search_algos.h"

/**
 * rec_binary - recusrively searches with the binary search algo
 * @array: int array
 * @first: first index
 * @last: last index
 * @value: value being searched for
 * Return: returns the index of value or -1
 */

int rec_binary(int *array, size_t first, size_t last, int value)
{
	size_t mid;
	int ret;

	if (last < first || !array)
		return (-1);
	printf("Searching in array: ");

	for (mid = first; mid <= last; mid++)
	{
		if (mid != first)
			printf(", ");
		printf("%d", array[mid]);
	}

	printf("\n");
	mid = (first + last) / 2;
	if (array[mid] == value)
		return (mid);

	else if (array[mid] < value)
		ret = (rec_binary(array, first, mid + 1, value));

	else if (array[mid] > value)
		ret = (rec_binary(array, mid - 1, last, value));

	return (ret);
}

/**
 * binary_search - searches for value with binary search in sorted
 * int array
 * @array: sorted int array
 * @size: size of sorted array
 * @value: value being searched for
 * Return: returns the index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (rec_binary(array, 0, size - 1, value));
}
