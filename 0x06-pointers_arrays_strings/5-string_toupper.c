#include "main.h"

/**
 * string_toupper - converts lowercase string to uppercase
 * @s: an input string
 *
 * Return: char pointer to converted string
 */

char *string_toupper(char *s)
{
	char *start = s; /* starting address of the string to be returned */

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z') /* check if current character is lowercase */
			*s -= 32; /* converts curret char to uppercase */
		s++; /* move to the next character */
	}
	return (start);
}
