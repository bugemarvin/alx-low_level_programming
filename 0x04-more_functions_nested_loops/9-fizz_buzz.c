#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* Description: main - FizzBuzz Challenge diviseble with 3,5 and 15
* Return: 0 or 1 Always succes
*/
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3) == 0)
printf("Fizz");
if ((a % 5) == 0)
printf("Buzz");
if ((a % 15) == 0)
printf("FizzBuzz");
else
printf("%d", a);
printf(" ");
if (a == 100)
printf(" ");
}
printf("\n);
return (0);
}
