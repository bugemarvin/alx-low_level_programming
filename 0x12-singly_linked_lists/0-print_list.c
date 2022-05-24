#include "lists.h"
#include <stddef.h>
#include <stdio.h>

size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	else
		printf("[%u] %s\n", (*h).len = 0, (*h).str = "(nil)");
}
