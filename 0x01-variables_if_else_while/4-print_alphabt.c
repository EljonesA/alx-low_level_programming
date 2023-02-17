#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char al, e, q;

	e = 'e';
	q = 'q';

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != e && al != q)
			putchar(al);
	}
	putchar('\n');

	return (0);
}
