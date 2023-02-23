#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer n
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('\\');
	}
	_putchar('n');
}
