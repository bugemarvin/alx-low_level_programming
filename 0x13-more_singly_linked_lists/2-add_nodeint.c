#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
  * add_nodeint - main function to add nodes.
  * @head: pointer to a pointer for add struct nodes.
  * @n: last node.
  *
  * Return: Always 1 on succes.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(*ptr));
		if (ptr == NULL)
		{
			return (NULL);
		}
	if (ptr != NULL)
	{
		ptr->n = n;
		ptr->next = (*head);
		(*head) = ptr;
	}
	return (ptr);
	free(ptr);
}
