#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - in Main.h
 * @n - an input integer
 * Description - function that prints all natural numbers from n to 98
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
