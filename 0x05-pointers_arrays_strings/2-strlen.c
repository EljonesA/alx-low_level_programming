#include "main.h"

/**
 * _strlen - returns length of string
 * @s: pointer s to char
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
