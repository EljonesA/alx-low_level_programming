#include "main.h"

/**
 * swap_int - swap value of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int chg;

	chg = *a;
	*a = *b;
	*b = chg;
}
