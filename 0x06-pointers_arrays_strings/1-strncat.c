#include "main.h"

/**
 * _strncat - concatinates two strings using n bytes from src
 * @dest: destination input string
 * @src: source input string
 * @n: an integer
 *
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr;
	int i = 0;

	dest_ptr = dest;
	while (*dest_ptr != '\0')
		dest_ptr++;

	while (*src != '\0' && i < n)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		i++;
	}

	*dest_ptr = '\0';
	return (dest);
}
