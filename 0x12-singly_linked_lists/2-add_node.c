#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
  * add_node - main function to add new nodes.
  * @head: pointer ref for head for list_t.
  * @str: pointer to the string of the list_t.
  *
  * Return: if str is NULL output [0] (nil).
  */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int a = 0;
	char *check;
	list_t *ptr = malloc(sizeof(struct list_s));
		if (ptr == NULL)
		{
			return (NULL);
		}
	check = strdup(str);
	while (str[a])
	{
		a++;
	}
	if (!check)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = a;
	ptr->str = check;
	ptr->next = (*head);
	(*head) = ptr;
	return (ptr);
}
