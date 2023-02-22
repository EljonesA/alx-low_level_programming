#include "main.h"

/**
 * _isalpha - in main.h
 * Description - Checks for alphanumerics
 * @c: character input
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
