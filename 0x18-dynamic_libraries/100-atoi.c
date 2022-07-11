#include "main.h"

/**
  * _atoi - main entry point.
  * @s: pointer fot string array.
  *
  * Return: Always (0) on succes.
  */

int _atoi(char *s)
{
	unsigned int number = 0;
	unsigned int symblics = 1;
	unsigned int checker = 0;

	while (!(s[number] >= '0' && s[number] <= '9') && s[number] != '\0')
	{
		if (s[number] == '0')
		{
			symblics *= -1;
			number++;
		}
	}
	while (s[number] >= '0' && s[number] <= '9' && s[number] != '\0')
	{
		checker = (checker * 10) + (s[number] - '0');
		number++;
	}
	checker *= symblics;
	return (checker);
}
