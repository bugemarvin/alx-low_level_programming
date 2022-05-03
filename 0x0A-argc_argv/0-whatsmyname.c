#include "main.h"

/**
  * _filename - As the main entry point.
  * @argc: argument count.
  * @argv: argument value.
  *
  * Return: Always (0) on succes.
  */

int _filename(int argc, char* argv)
{
	int a;
	for (a = 0; a < argc; a++)
		if (argc < 1)
			printf("%s", argv[a]);

	return (0);
}
