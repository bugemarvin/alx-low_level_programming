/**
* Description: main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
* Return: 0 if successful
*/
int main(void)
{
int characters;
for (characters = 'a'; characters <= 'z'; characters++)
putchar(ch);
for (characters = 'A'; characters <= 'Z'; characters++)
putchar(characters);
putchar('\n');
return (0);
}