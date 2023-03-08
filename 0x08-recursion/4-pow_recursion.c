#include "main.h"

/**
 * _pow_recursion - computes value of x raised to power of y
 * @x: an input integer
 * @y: an input integer
 *
 * Return: result of x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y == 1)
		return (x);

	else
		return (x *= _pow_recursion(x, y - 1));
}
