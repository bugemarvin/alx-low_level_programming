#include "lists.h"

/**
 *
 *
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node, *last_node;

	end_node = malloc(sizeof(dlistint_t));
	end_node->n = n;
	end_node->next = NULL;
	if ((*head) == NULL)
	{
		end_node->prev = NULL;
		(*head) = end_node;
	}
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = end_node;
	end_node->prev = last_node;
	return (end_node);
	free(end_node);
}
