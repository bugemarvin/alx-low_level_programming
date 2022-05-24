#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - main function to print all elements.
  * @h: constant pointer for list_t.
  *
  * Return: if str is NULL output [0] (nil).
  */

size_t print_list(const list_t *h)
{	size_t a;
	for (a = 0; h; a++)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%u] %s\n", 0, "(nil)");
		}
		h = h->next;
	}
	return (a);
}
