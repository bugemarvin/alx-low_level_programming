#include "main.h"
#include <stdio.h>
/**
*print_to_98 - as functions entry
*@n: The character to print
*Return: 0 or 1 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
void print_to_98(int n)
{

while (n < 98)
{
	printf("%i, ", n);
	n++;
}
while (n > 98)
{
	printf("%i, ", n);
	n--;
}

printf("98");
putchar('\n');
}
