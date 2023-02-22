#include "main.h"

/**
 * print_sign - in main
 * Description - prints sign of a number
 * @n - integer n
 *
 * Return: Depends on condition
 */

int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
}
