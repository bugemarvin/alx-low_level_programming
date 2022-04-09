#include <stdio.h>
/**
*Description: main - prints the alphabet in lowercase, followed by a new line.
*Return: 0 if successful
*/
int main(void)
{
char characters = 'a';
while (characters <= 'z')
{
if (characters != 'e' && characters != 'q')
{
putchar(characters);
}
characters++;
}
putchar('\n');
return (0);
}
