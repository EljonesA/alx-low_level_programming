#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to string of 0 & 1 chars
 *
 * Return: converted num, 0 incase b is NULL/chars not 0 & 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int outcome = 0;
	unsigned int base = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	while (i)
	{
		if (b[i - 1] != '0' && b[i - 1] != '1')
			return (0);
		outcome += (b[i - 1] - '0') * base;
		base <<= 1;
		i--;
	}
	return (outcome);
}
