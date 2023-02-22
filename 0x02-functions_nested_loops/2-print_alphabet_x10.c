#include "main.h"

/*
 * print_alphabet_x10 - print alphabet in lowercase 10X.
 * Description: followed by a new line
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a <= 9)
	{
		a++;
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
