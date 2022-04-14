#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* Description: main - FizzBuzz Challenge diviseble with 3,5 and 15
* @a: prints out a number
* Return: 0 or 1 Always succes
*/
int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3) == 0)
{
printf("Fizz\t");
if ((a % 5) == 0)
{
printf("Buzz\t");
if ((a % 15) == 0)
{
printf("FizzBuzz\t");
}
}
}
else
{
printf("%d\t", a);
}
}
return (0);
}
