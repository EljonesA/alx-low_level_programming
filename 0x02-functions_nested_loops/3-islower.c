#include "main.h"

/**
 * _islower - in main.h
 * Description - checks for lowercase characters
 * @c: input character
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}
	return (lower);
}
