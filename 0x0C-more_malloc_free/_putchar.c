#include "main.h"
#include <unistd.h>

/**
  * _putchar - as the stdio for c lang.
  * @c: as the string of a char.
  *
  * Return: Always (0) for succes.
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
