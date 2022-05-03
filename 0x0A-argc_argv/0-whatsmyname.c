#include "./main.h"
#include <stdio.h>
/**
  * Description: main As the entry point.
  * @argc: argument count.
  * @argv: argument value.
  *
  * Return: Always (0) on succes.
  */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		int z = strtol(argv[i],NULL,10);
		if (argc < 1)
			putchar(z);
	}
	return (0);
}
