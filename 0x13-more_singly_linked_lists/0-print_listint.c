#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
  * print_listint - main function to print elements and index.
  * @h: pointer to the print list struct.
  *
  * Return: always 1 in succes.
  */

size_t print_listint(const listint_t *h)
{
	size_t a;
		if (h == NULL)
		{
			return (0);
		}
	if (h != NULL)
		for (a = 0; h; a++)
		{
			if (h->n)
			{
				printf("%d\n", (*h).n);
			}
			h = h->next;
		}
	return (a);
}
