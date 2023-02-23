#include "main.h"

/**
 * print_line - print straight line in the terminal
 * @n: integer n
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int  i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
