#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_list - main function to free mem.
  * @head: pointer ref for struct.
  *
  * Return: Always 1 on succes.
  */

void free_list(list_t *head)
{
	list_t *check_free;
		while ((check_free = head))
		{
			if (check_free != NULL)
			{
				head = head->next;
				free(check_free->str);
				free(check_free);
			}
		}
}
