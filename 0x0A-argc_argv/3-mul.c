#include <Main.h>
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
	int a, y;
	int result = 1;

	for (a = 1; a < argc; a++)
	{
		y = strtol(argv[a], NULL, 10);
		result = result * y;
	}
	if (argc <= 2)
	{
		printf("Error");
	}
	else
	{
		printf("%d\n", result);
	}
	return (0);
}
