#include "main.h"

/**
 * factorial - returns factorial of a num
 * @n: the integer to be factorized
 *
 * Return: the factorial value.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}
