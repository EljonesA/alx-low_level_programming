#include "main.h"

/**
 * _puts_recursion - prints string followed by new line
 * @s: pointer to a character array
 *
 * Return: success (0).
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case */
		return;

	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\0');
}
