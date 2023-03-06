#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination for copy
 * @src: source to provide copy
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest; /* pointer to dest */

	while (n--) /* condition to copy n characters */
		*dest++ = *src++; /* copy src to dest, increment @ to move to next char */

	return (ptr);
}
