#include "main.h"

/**
  * puts_half - main entry point.
  * @str: prints half a string.
  */

void puts_half(char *str)
{
	int strlen;
	int a;
	int b;
		for (strlen = 0; str[strlen] != '\0'; strlen++)
			;
		a = (strlen - 1) / 2;
		for (b = a + 1; str[b] != '\0'; i++)
		{
			putchar(str[b]);
		}
		putchar('\n');
}
