#include "main.h"

/**
 * _memset - function to fill a block of memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte to be used to fill the memory area
 * @n: number of bytes in memory that shoud be filled with the constant byte
 *
 * Return: pointer to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s; /* pointer to s, beginning of memory area */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (ptr);
}
