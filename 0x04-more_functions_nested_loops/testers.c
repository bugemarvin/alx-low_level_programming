#include <stdio.h>
/**
*Description: main - prints all digit of base 10 starting from 0, new line.
*Return: 0 if successful
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
if (c != '2' && c != '4')
{
putchar(c);
}
putchar('\n');
return (0);
}