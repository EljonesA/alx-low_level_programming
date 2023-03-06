#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: input string to search
 * @needle: input string to locate in haystack
 *
 * Return: pointer to beginning of located substring(if found) else NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *start = needle, *startn = haystack;

	while (*haystack)
	{
		startn = haystack;
		needle = start;

		while (*haystack == *needle)
		{
			haystack++, needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = startn + 1;
	}

	return (NULL);
}
