/**
* Description: main - display of all posible combinations
* Return: 0 if successful
*/
int main(void)
{
int number;
for (number = 48; number < 58; number++)
{
putchar(number);
if (number != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}