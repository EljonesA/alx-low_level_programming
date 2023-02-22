#include "main.h"

/*
 * print_alphabet_x10 - print alphabet in lowercase 10X.
 * 
 * Return: Always 0.
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
