#include "main.h"

/**
 * clear_bit - sets value of a given bit to 0
 * @n: pointer to the bits
 * @index: bit position to set to 0
 *
 * Return: 1 if worked, -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
