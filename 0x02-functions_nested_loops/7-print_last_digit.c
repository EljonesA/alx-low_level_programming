#include "main.h"

/**
 * print_last_digit - in Main
 * Description - prints last digit of a number
 * @m - an integer input
 *
 * Return: Always 0(Success)
 */

int print_last_digit(int m)
{
	int q;

	if (m < 0)
		q = -1 * (m % 10);
	else
		q = m % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
