#include "main.h"
#include <stdio.h> /* included to use NULL */

/**
 * _strspn - gets length of a prefix substring
 * @s: pointer to string to be searched for prefix substring
 * @accept: pointer to string containing set of acceptable charcaters
 *
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefix_len = 0; /* counter variable */

	while (*s != '\0') /* loop through @character in the string */
	{
		if (_strchr(accept, *s) != NULL)
		{
			prefix_len++;
		} else
			break; /* end prefix if char is not in accept string */

	s++; /* move to next char in the string */
	}

	return (prefix_len); /* length of the prefix substring */
}
