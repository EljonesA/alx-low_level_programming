#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - implementation of the binary searh algorithm
 * @array: data structure to search in
 * @size: of the array
 * @value: what we are searching for in the array
 * Return: index of value if found, else -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		middle = (left + right) / 2;
		if (array[middle] == value)
		{
			return (middle);
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}

	return (-1);
}
