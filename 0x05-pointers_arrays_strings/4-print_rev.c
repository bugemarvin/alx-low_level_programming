#include "main.h"

/**
  * print_rev - main entry point.
  * @s: prints characters in reverse.
  */

void print_rev(char *s)
{
	int a;
	int strlen;
		a = 0;
		for (strlen = 0; s[strlen] = '\0'; strlen++)
			;
			for (a = strlen - 1; a >= 0; a--)
			{
				putchar(s[a]);
			}
		putchar('\n');
}
