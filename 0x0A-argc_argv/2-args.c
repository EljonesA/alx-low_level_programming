#include <stdio.h>

/**
 * main - prints all arguements it receives
 * @argc: arguement count
 * @argv: arguement vector
 * Return: success (0).
 */

int main(int argc, char *argv[])
{
	int i; /* counter variable */

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
