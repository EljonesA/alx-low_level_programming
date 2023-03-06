#include "main.h"

/**
 * _memset - function to fill a block of memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte to be used to fill the memory area
 * @n: number of bytes in memory that shoud be filled with the constant byte
 *
 * Return: pointer to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s; /* pointer to s, beginning of memory area */
	unsigned int i;

	for (i = 0; i < n; i++) /* loop through @byte in the memory arear */
	{
		*s = b; /* set current byte to the constant byte in b */
		s++; /* move the pointer to the next byte */
	}

	return (ptr); /* return pointer to the memory area */
}
