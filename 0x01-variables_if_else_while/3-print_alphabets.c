#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alP;

	for (alP = 'a'; alP <= 'z'; alP++)
		putchar(alP);
	for (alP = 'A'; alP <= 'Z'; alP++)
		putchar(alP);
	putchar('\n');

	return (0);
}
