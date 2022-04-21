#include "main.h"

/**
  * rev_string - main entry point.
  * @s: pointer that prints a reverse string.
  */

void rev_string(char *s)
{
	int a;
	int b;
	int strlen;
	char s1;
	char s2;
		for (strlen = 0; s[strlen] != '\0'; strlen++)
			;
		a = strlen - 1;
		b = 0;
		while (b < a)
		{
			s1 = s[b];
			s2 = s[a];
			s[a] = s1;
			s[b] = s2;
			a--;
			b++;
		}
}
