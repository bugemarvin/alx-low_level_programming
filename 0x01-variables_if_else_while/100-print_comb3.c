#include <stdio.h>
/**
*Description: main - prints possible combinations of two different digits.
*Return: 0 for succes
*/
int main(void)
{
int i;
int n;
for (n = 1; n < 90; n++)
{
for (i = n;;)
{
if (i / 10 % 10 > i % 10)
break;
if (i /= 10 == 0)
{
putchar("%d", n);
break;
}
}
}
}