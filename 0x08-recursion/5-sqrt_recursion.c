#include "main.h"

/**
 * _sqrt_recursion - computes sqrt of a number
 * @n: integer to be computed
 *
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(1, n));
}

/**
 * _sqrt - calculates square root of num
 * @pre: previous value
 * @root: square root value
 * Return: root.
 */

int _sqrt(int pre, int root)
{
	if (pre > root)
		return (-1);

	else if (pre * pre == root)
		return (pre);

	else
		return (_sqrt(pre + 1, root));
}
