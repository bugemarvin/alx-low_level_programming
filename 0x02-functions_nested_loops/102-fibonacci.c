#include "main.h"
#include <stdio.h>
/**
*Description: main - 
*Return: 0 for succes
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