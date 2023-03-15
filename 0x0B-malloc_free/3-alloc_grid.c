#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: input integer at number of columns
 * @height: input integer at number of rows
 *
 * Return: pointer to a 2D array, NILL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
