#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 *
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 0; /* counter variable */

	while (str[i])
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
		str[i] -= 32;

		if (check_separators(str[i]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}

/**
 * check_separators - look for separator words specified
 * @c: input character
 *
 * Return: 1 if separator, 0 otherwise
 */

int check_separators(char c)
{
	int i;
	char separators[13] = { ' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}' };

	for (i = 0; i < 13; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}
