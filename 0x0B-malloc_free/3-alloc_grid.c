#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - Main Entry
 * @width: input
 * @height: input
 * Return: 0
*/

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(sizeof(*ptr) * height);
	if (width <= 0 || height <= 0 || ptr == 0)
	{
	return (NULL);
	}
	else
	{
	for (i = 0; i < height ; i++)
	{
		ptr[i] = malloc(sizeof(*ptr) * width);

		for (j = 0 ; j < width ; j++)
		{
		ptr[i][j];
		}
	}
	}
	return (ptr);
}
