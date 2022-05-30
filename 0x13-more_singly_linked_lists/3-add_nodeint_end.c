#include "lists.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
  * add_nodeint_end - main func to print from end.
  * @head: pointer to a pointer as a ref.
  * @n: constant as the null pointer.
  *
  * Return: Always 1 on succes.
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *end;
	(void)end;
	ptr = malloc(sizeof(struct listint_s));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	end = (*head);
	if ((*head) == NULL)
	{
		(*head) = ptr;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = ptr;
	}
	return (ptr);
}
