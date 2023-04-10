#include "main.h"

/**
 * print_binary - prints binary rep. of a number
 * @n: the number
 *
 * Return: the binary representation.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 0x80000000;
	int bit_count = 32;
	int flag = 0;

	while (bit_count--)
	{
		if (flag == 1 && (n & mask) == 0)
			_putchar('0');
		else if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		mask <<= 1;
	}
	if (flag == 0)
		_putchar('0');
}
