#include "main.h"
/**
*_isalpha - as functions entry
*@c: The character to print
*Return: 0 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
