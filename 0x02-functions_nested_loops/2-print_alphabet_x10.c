#include "main.h"

/*
 * print_alphabet_x10 - check main
 * Des - prints 10 times the alphabet in small letters
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a = 0;
	char i;

	while (a <= 9)
	{
		a++;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
