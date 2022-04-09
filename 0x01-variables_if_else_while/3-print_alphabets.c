#include <stdio.h>
/**
*Description: main - print alphabet in lowercase and uppercase, and new line.
*Return: 0 if successful
*/
int main(void)
{
int characters;
for (characters = 'a'; characters <= 'z'; characters++)
putchar(characters);
for (characters = 'A'; characters <= 'Z'; characters++)
putchar(characters);
putchar('\n');
return (0);
}
