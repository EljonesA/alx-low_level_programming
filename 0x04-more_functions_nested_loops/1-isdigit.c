#include "main.h"

/**
 * _isdigit - in Main
 * Description - Checks for a digit (0 through 9)
 * @c: character to check
 *
 * Return: 1 or 0 depending on condition
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
