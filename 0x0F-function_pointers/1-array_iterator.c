#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes given action on each array element
 * @array: an array of integers
 * @size: size of the array
 * @action: a function pointer
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
