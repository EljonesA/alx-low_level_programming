#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: input integer
 *
 * Return: Destination string (copied).
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* copy upto n characters from src to dest */
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	/* if src has fewer than n characters, pad dest with null terminator. */
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}

	return (dest);
}
