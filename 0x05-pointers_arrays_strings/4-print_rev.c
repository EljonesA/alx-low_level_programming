#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer s to char
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len)
		_putchar(s[--len]);

	_putchar('\n');
}
