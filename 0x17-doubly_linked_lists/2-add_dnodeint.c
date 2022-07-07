#include "lists.h"

/**
 * add_dnodeint - main function to add new nodes at start.
 * @head: pointer ref for head for the list.
 * @n: contant number of the list.
 *
 * Return: always a new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	unsigned int a;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = (*head);
	new_node->prev = NULL;
	if ((*head) != NULL)
	{
		for (a = 0; (*head)->prev != NULL; a++)
		{
			(*head)->prev = new_node;
		}
	}
	(*head) = new_node;
	return (new_node);
}
