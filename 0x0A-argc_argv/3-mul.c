#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 1(incase of error), 0(success).
 */

int main(int argc, char *argv[])
{
	int a, b;
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]); /* atoi to convert command line arguements,*/
				     /* from strings to integers */
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}

	return (0);
}
