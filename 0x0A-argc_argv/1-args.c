#include "main.h"
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
	int a;
	int sum = 0;

	for (a = 0; a < argc; a++)
	{
		if (*(argv[a]) > 0)
		{
			if (argc == 1)
			{
				printf("%d\n", sum);
			}
		}
		sum = argc - 1;
	}
	if (argc >= 2)
	{
		printf("%d\n", sum);
	}
	return (0);
}
