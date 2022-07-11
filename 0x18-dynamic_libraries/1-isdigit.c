#include "main.h"
/**
*_isdigit - main enter block
*Description: main - checking for a digit
*@c: prints a number
*Return: 0 or 1 Always succes
*On error, -1 is returned, and errno is set appropriately
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
