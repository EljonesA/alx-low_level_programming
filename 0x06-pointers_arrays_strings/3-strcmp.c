#include "main.h"

/**
 * _strcmp - compares to strings
 * @s1: input string
 * @s2: input string
 *
 * Return: Difference between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && s2) /*Compare characters until one of the string ends */
	{
		if (*s1 != *s2) /* if characters are different */
			return (*s1 - *s2); /* return their ASCII difference */
		s1++; /* if equal, move to next character in s1 */
		s2++; /* if equal, move to next character in s2 */
	}

	return (*s1 - *s2); /* Return difference btwn last characters */
}
