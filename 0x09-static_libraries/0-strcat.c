#include "main.h"

/**
 * _strcat - concatenate 2 strings.
 * @dest: first string.
 * @src: second string.
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int j;

		j = 0;
		k = 0;
			while (dest[k] != '\0')
				k++;
			while (src[j] != '\0')
			{
				dest[k] = src[j];
				k++;
				j++;
			}
			dest[k] = '\0';
			return (dest);
}
