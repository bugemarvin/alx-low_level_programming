#include "main.h"
/**
*_abs- as functions entry
*@c: The character to print 
*Return: 0 for succes
*On error, -1 is returned, and errno is set appropriately.
*/
int _abs(int n)
{

return (n >= 0 ? n : n * -1);

}