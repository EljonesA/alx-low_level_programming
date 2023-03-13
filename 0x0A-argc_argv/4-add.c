#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two numbers
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 1(error), 0(success)
 */

int main(int argc, char *argv[])
{
	int i = 1; /* set to one coz 0 is the name of the program*/
	int num, result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	while (i < argc)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		result += num;
		i++;
	}
	printf("%d\n", result);
	return (0);
}
