#include "main.h"
/**
*_isdigit - main enter block
*Description: main - checking for a digit
*@n: prints a number
*Return: 0 or 1 Always succes
*On error, -1 is returned, and errno is set appropriately
*/
int _isdigit(int n)
{
if (n >= 0 && n <= 9)
{
return (1);
}
else
{
return (0);
}
}
