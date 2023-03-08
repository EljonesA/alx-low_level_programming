#include "main.h"

/**
 * _strlen_recursion - returns lenght of a string
 * @s: pointer to an input string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s)
	{
		len = 1 + _strlen_recursion(s + 1);
	}
	return (len);
}
