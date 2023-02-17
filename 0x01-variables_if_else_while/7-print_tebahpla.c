#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alwyas 0 (Success)
 */

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
		putchar('\n');

	return 0;
}
