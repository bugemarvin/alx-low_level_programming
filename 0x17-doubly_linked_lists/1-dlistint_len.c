#include "lists.h"

/**
 * dlistint_len - function to print elements of a linked list.
 * @h: pointer for the list of a element.
 *
 * Return: Always number of the elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a;
		for (a = 0; h != NULL; a++)
		{
			h = h->next;
		}
	return (a);
}
