#include "main.h"
#include <stdio.h>
/**
*Description: main - as functions entry
*Return: 0 or 1 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}

		c++;
	}
	printf("%i\n", sum);
	return (0);
}
