#include "main.h"

/**
 * is_prime_number - checks if a num is a prime number
 * @n: integer to be checked
 *
 * Return: 1 (num is prime) else 0.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	else if (n <= 3)
		return (1);

	else
		return (is_divisible(n, div));
}

/**
 * is_divisible - checks if num is divisble
 * @num: input number to be checked
 * @div: result of the division
 *
 * Return: 1(num is divisible) else 0(num not divisible)
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	else if (div == num / 2)
		return (1);

	else
		return (is_divisible(num, div + 1));
}
