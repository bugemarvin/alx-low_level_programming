#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Description: main - As the function entry point.
 * @argc: As the count for the arguments.
 * @argv: As the value placed comand line arguments.
 *
 * Return: Always (0) onsucces.
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int mul = 1;

	for (num1 = 1; num1 < argc; num1++)
	{
		num2 = strtol(argv[num1], NULL, 10);
		if (mul >= 1)
		{
			mul = mul * num2;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
	if (argc <= 2)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		printf("%d\n", mul);
	}
	return (0);
}
