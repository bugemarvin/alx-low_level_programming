#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * main - as function for the calc.
  * @argc: As the count for the arguments.
  * @argv: As the values of the arguments.
  *
  * Return: Always (0) for succes.
  */

int main(int argc, char *argv[])
{
	int asum;
	int (*p)(int, int);
		int a = strtol(argv[1], NULL, 10);
		int b = strtol(argv[3], NULL, 10);

	if (argc != 4)
	{
		printf("Error\n"),
			exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n"),
			exit(98);
	}
	p = get_op_func(argv[2]);
	if (*p != NULL)
	{
		asum = p(a, b);
		printf("%d\n", asum);
	}
	else
	{
		printf("Error\n"),
			exit(98);
	}
	return (0);
}
