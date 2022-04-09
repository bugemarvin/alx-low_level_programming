#include <stdio.h>
/**
*Description: main - prints the alphabet in lowercase, followed by a new line.
*Return: 0 if successful
*/
int main(void)
{
char characters;
for (characters = 'a'; characters <= 'z'; characters++)
putchar(characters);
putchar('\n');
return (0);
}
