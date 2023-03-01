#include "main.h"

/**
 * reverse_array - function that reverses an array
 * @a: pointer to an input array
 * @n: number of array elements
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i = 0; /* counter variable */
	int temp; /* temporary variable to store array elemnts during swapping */

	while (i < n--) /* loop through array swapping elements from opposite ends */
	{
		temp = a[i]; /* store value of a[i] in temp */
		a[i++] = a[n]; /* Repalce a[i] with a[n] and increment i */
		a[n] = temp; /* Replace a[n] with the stored value of a[i] */
	}
}
