#include "main.h"

/**
 * _strcpy - copies string pointed to by src,
 * to buffer pointed to by dest including '\0'
 * @dest: pointer to string destination
 * @src: pointer to string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
		*dest++ = *src++;
	return (temp);
}
