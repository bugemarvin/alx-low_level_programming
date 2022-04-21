#include "main.h"

/**
  * puts2 - main entry point.
  * @str: prints every char in a string.
  */

void puts2(char *str)
{
	int a;
		a = 0;
		while (str[a] != '\0')
		{
			if ((a % 2) == 0)
			{
				putchar(str[a]);
			}
			a++;
		}
		putchar('\n');
}
