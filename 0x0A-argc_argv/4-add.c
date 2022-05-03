#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - As the function entry point.
 * @argc: As the count for the arguments.
 * @argv: As the value placed comand line arguments.
 *
 * Return: Always (0) onsucces.
 */

int main(int argc, char *argv[])
{
	int a;
	int b = 0;
	int c;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (c = 2; argv[a][c]; c++)
		{
			if (!(argv[a][c] > 48) || !(argv[a][c] < 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		c = strtol(argv[a], NULL, 10);
		sum += c;
	}
	if (argc >= 2)
	{
		printf("%d\n", sum);
	}
	else if (argc <= 1)
	{
		printf("%d\n", b);
	}
	return (0);
}
