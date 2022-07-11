#include "main.h"

/**
  * *_strcpy - main entry point.
  * @dest: prints a character.
  * @src: prints to a pointed string.
  * Return: 0 or 1 On succes.
  */

char *_strcpy(char *dest, char *src)
{
	int a;
	int strlen;

		for (strlen = 0; src[strlen] != '\0'; strlen++)
			;
		for (a = 0; a <= strlen; a++)
		{
			dest[a] = src[a];
		}
		return (dest);
}
