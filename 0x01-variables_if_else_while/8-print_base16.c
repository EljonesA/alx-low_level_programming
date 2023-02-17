#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char al;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (al = 'a'; al <= 'f'; al++)
		putchar(al);
	putchar('\n');

	return (0);
}
