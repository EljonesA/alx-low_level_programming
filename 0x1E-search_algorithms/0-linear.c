#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - implementation of the linear searh algorithm
 * @array: data structure to search in
 * @size: of the array
 * @value: what we are searching for in the array
 * 
 * Return: index of value if found, else -1
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
    {
        return (-1);
    }
    
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}