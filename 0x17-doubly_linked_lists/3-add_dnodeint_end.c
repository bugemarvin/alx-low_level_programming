#include "lists.h"

/**
 * add_dnodeint_end - function to add node at the end.
 * @head: pointer ref to the head of the struct.
 * @n: contant for the list.
 *
 * Return: Always a new node at the end.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	unsigned int a;
	dlistint_t *end_node, *last_node;

	end_node = malloc(sizeof(dlistint_t));
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		end_node->prev = NULL;
		(*head) = end_node;
	}
	for (a = 0; last_node->next != NULL; a++)
	{
		last_node = last_node->next;
	}
	last_node->next = end_node;
	end_node->prev = last_node;
	return (end_node);
	free(end_node);
}
