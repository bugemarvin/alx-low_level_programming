#include "main.h"
/**
*_islower - as functions entry
*@c: The character to print
*Return: 0 or 1
*On error, -1 is returned, and errno is set appropriately.
*/
int _islower(int c)
{
return (c >= 97 && c <= 122);
}
