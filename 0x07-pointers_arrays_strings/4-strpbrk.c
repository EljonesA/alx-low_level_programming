#include "main.h"
#include <stdio.h> /* included to use NULL */

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: input string
 * @accept: input charcaters to locate the string
 *
 * Return: pointer to bytes (if *s == *accept) else NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}

	return (NULL);
}
