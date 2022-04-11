#include <stdio.h>
/**
*Description: main - prints possible combinations of two different digits.
*Return: 0 for succes
*/
int main(void)
{
int i;
int n;
for (n = '0'; n <= '9'; n++)
{
for(i = '0'; i <= '9'; i++)
{
if(n < i)
{
putchar(n);
putchar(i);
if(n != '9' || (n == '9' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
}