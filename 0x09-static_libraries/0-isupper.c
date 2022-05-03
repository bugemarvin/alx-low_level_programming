#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

/**
 * _isupper - main entry block
 * Description: main - prints characters in uppercase
 * @c: prints the charcters
 *
 * Return: Always (1) for success
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
