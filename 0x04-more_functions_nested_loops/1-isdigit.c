#include "main.h"

/**
 * _isdigit - in Main
 * Description - Checks for a digit (0 through 9)
 * @param c - character to check
 *
 * Return: 1 or 0 depending on condition
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
