#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates am array of chars and initializes it with input char
 *
 * @size: size of the array of chars
 * @c: char to be set in initialized array
 *
 * Return: returns a string of size size filled with char c
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *array = malloc(size * sizeof(char));

	if (size == 0)
		return ('\0');

	for (i = 0; i <= size; i++)
	{
		array[i] = c;
	}
	return (array);
}
