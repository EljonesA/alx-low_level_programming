#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the input string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1); /* call next char in the string */
		_putchar(*s);
	}
}
