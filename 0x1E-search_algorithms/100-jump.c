#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - implementation of the linear searh algorithm
 * @array: data structure to search in
 * @size: of the array
 * @value: what we are searching for in the array
 * Return: index of value if found, else -1
*/

int jump_search(int *array, size_t size, int value)
{
	int step, prev = 0;

	if (array == NULL)
	{
		return (-1);
	}

	/* get step */
	step = sqrt(size);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[(int)fmin(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
		{
			/* element not found */
			printf("Value found between indexes [%d] and [%ld]\n",
					prev - (int)sqrt(size), size - 1);
			printf("Value checked array[%d] = [%d]\n", prev -
					(int)sqrt(size), array[prev -
					(int)sqrt(size)]);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	/* linear serah in found block */
	printf("Value found between indexes [%d] and [%d]\n", prev -
			(int)sqrt(size), prev);
	while (array[prev] < value)
	{
		if (prev == fmin(step, size))
		{
			/* element not found */
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (array[prev] == value)
	{
		/* element found a prev block */
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
