#include "main.h"
#include <stdio.h>

/**
 * _strchr - checks for char c in a string
 * @s: pointer to the string to be checked
 * @c: the character to match
 *
 * Return: pointer to string (Incase match is found) or NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	return (NULL);
}
