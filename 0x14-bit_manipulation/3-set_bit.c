#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to the bit
 * @index: index to set value
 *
 * Return: 1 if it worked, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
