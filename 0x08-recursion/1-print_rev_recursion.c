#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the input string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0') /* base case to terminate the recursion */
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1); /* call function with next char */
		_putchar(*s); /* print current char */
	}
}
