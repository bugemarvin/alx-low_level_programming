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
	int calc;
	int (*operator)(int, int);
		int num1 = strtol(argv[1], NULL, 10);
		int num2 = strtol(argv[3], NULL, 10);

	if (argv[2][1] != '\0')
	{
		printf("Error\n"),
			exit(98);
	}

	if (argc != 4)
	{
		printf("Error\n"),
			exit(98);
	}

	operator = get_op_func(argv[2]);
	
	if (operator != 0)
	{
		calc = (*operator)(num1, num2);
		printf("%d\n", calc);
	}
	else
	{
		printf("Error\n"),
			exit(98);
	}
	return (0);
}
