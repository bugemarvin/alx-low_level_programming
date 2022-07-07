#include "lists.h"

/**
 * print_dlistint - function to print elements of a list.
 * @h: pointer to print the elements.
 *
 * Return: Always a node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a;
		for (a = 0; h; a++)
		{
			if (h->n != '\0')
			{
				printf("%d\n", h->n);
			}
			h = h->next;
		}
	return (a);
}
