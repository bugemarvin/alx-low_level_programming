#include "lists.h"

/**
  * list_len - main function to print elements.
  * @h: const function pointer.
  *
  * Return: size_t for the num elements.
  */

size_t list_len(const list_t *h)
{
	size_t  a;
	for (a = 0; h; a++)
	{
		if (h->str != NULL)
			h = h->next;
	}
	return (a);
}
