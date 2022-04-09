#include <stdio.h>
/**
* Description: main - prints all the numbers of base 16 in lowercase, followed by a new line
* Return: 0 if successful
*/
int main(void)
{
int base_numbers;
char characters;
for (base_numbers = 48; base_numbers < 58; base_numbers++)
{
putchar(base_numbers);
}
for (characters = 'a'; characters <= 'f'; characters++)
{
putchar(characters);
}
putchar('\n');
return (0);
}