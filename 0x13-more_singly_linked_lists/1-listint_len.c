#include "lists.h"

/**
  * listint_len - main function to print no of elements.
  * @h: pointer to struct listint_t
  *
  * Return: Always 1 on succes.
  */

size_t listint_len(const listint_t *h)
{
	size_t a;
		if (h == NULL)
		{
			return (0);
		}
	if (h != NULL)
	{
		for (a = 0; h; a++)
		{
			if ((*h).n)
			{
				h = h->next;
			}
		}
	}
	return (a);
}
