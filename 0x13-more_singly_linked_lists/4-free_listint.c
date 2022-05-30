#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_listint - main function to free listint_t struct.
  * @head: pointer to listint_t.
  *
  * Return: Always 1 on succes.
  */

void free_listint(listint_t *head)
{
	listint_t *ptr;
	(void)ptr;
		while ((ptr = head))
		{
			if (ptr != NULL)
			{
				head = head->next;
				free(ptr);
			}
		}
}
