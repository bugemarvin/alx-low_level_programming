#include "main.h"
#include <stdio.h>
/**
*Description: main - as functions entry
*@c: The character to print 
*Return: 0 or 1 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}