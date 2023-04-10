#include "main.h"

/**
 * get_bit - returns value of bit at given index
 * @n: int value
 * @index: index of bit you want to get
 *
 * Return: value of bit at given index, -1 incase of error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	return ((n & max) ? 1 : 0);
}
