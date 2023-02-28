#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print n elements of an array of ints
 * @a: input array
 * @n: input int
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
