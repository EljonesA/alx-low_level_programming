#include "main.h"

/**
 * print_sign - in main
 * Description - prints sign of a number
 * int n - integer n
 *
 * Return: Depends on condition
 */

int print_sign(int n);
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
}
