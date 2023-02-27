#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer str of type char
 * Return: Nothing.
 */

void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
