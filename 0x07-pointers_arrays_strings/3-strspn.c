#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: pointer to string to be searched for prefix substring
 * @accept: pointer to string containing set of acceptable charcaters
 *
 * Return: number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
			break;
	}
	return (count);
}
