#include "main.h"

/**
 * flip_bits - get no. of bits to flip to get one num from another
 * @n: first bit number
 * @m: second bit number
 *
 * Return: number of bbits to flip to get other number.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);

	while (xor != 0)
	{
		if (xor & 0x01)
			flips++;
		xor >>= 1;
	}
	return (flips);
}
