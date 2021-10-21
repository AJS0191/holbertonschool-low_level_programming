#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2d array
 *
 * @width: amount of columns
 * @height: amount of rows
 *
 * Return: returns a pointer to a 2d array
 **/
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **grid = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
		grid[i] = (int *)malloc(width * sizeof(int));

	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
	}
	else
	{
		free(grid);
		return (NULL);
	}
}