#include <stdio.h>
/**
*Description: main - prints all digit of base 10 starting from 0, new line.
*Return: 0 if successful
*/
int main(void)
{
int c;
int b;
for (c = 0; c < 10; c++)
for ( b = 0; b <= 14; b++)
if (b > 9)
putchar((b / 10) + 0);
putchar((b % 10) + 48);
putchar(10);
}