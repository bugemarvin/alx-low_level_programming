#include "main.h"
#include "stdio.h"

/**
  * Description: main - As the entry function point.
  * @argc: Argument counter.
  * @argv: Argument value.
  *
  * Return: Always (0) on succes.
  */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		if (*(argv[a]) > 0)
		{
			printf("%s\n", argv[a]);
		}
	}
	return (0);
}
