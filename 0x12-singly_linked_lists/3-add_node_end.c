#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * add_node_end - main function to add new node from end.
  * @head: pointer ref for head for list_t.
  * @str: pointer to the string of the list_t.
  *
  * Return: if str is NULL output [0] (nil).
  */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int a = 0;
	char *check;
	list_t *ptr = malloc(sizeof(struct list_s));
	list_t *last;
		if (ptr == NULL)
		{
			return (NULL);
		}
	check = strdup(str);
	while (str[a])
	{
		a++;
	}
	ptr->len = a;
	ptr->str = check;
	ptr->next = NULL;
	last = (*head);
	if ((*head) == NULL)
	{
		(*head) = ptr;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = ptr;
	}
	return (ptr);
	free(ptr);
}
