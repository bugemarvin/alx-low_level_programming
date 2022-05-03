#include "main.h"

/**
 * _isupper - main entry block
 * Description: main - prints characters in uppercase
 * @c: prints the charcters
 *
 * Return: Always (0) for success
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
