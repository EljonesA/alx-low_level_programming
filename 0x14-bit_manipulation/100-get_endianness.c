#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 1(little endian), 0(big endian).
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c == 1)
		return (1);
	return (0);
}
