/**
* Description: main - prints all single digit numbers of base 10 starting from 0, followed by a new line.
* Return: 0 if successful
*/
int main(void)
{
int numbers;
for (numbers = 48; numbers < 58; numbers++)
{
putchar(numbers);
}
putchar('\n');
return (0);
}