#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_listint2 - main function to free list.
  * @head: pointer ref to a pointer for the struct.
  *
  * Return: Always 1 on succes.
  */

void free_listint2(listint_t **head)
{
	listint_t *check_free, *temp_free;
		if (head != NULL)
		{
			temp_free = (*head);
			while ((check_free = temp_free))
			{
				if (check_free != NULL)
				{
					temp_free = temp_free->next;
					free(check_free);
				}
			}
			(*head) = NULL;
		}
}
