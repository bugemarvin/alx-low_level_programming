#include "main.h"
#include <stdio.h>
/**
*Description: main - as functions entry
*Return: 0 or 1 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
	int a = 0, b = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
