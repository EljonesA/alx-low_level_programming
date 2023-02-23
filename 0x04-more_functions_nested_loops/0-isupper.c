#include "main.h"

/**
 * _isupper - in Main
 * Description - Checks for uppercase character
 * @param c - an integer arguement/parameter
 *
 * Return: 1 or 0 based on whether condition is met
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
