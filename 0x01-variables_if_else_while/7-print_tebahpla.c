#include <stdio.h>
/**
* Description: main - prints the lowercase alphabet in reverse, followed by a new line.
* Return: 0 if successful
*/
int main(void)
{
char characters;
for (characters = 'z'; characters >= 'a'; characters--)
{
putchar(characters);
}
putchar('\n');
return (0);
}