#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table.
 *
 * @size: the lentgh of the array.
 * Return: NULL if function fails
 *          On succes pointer to a new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int a;
	hash_table_t *item;
	hash_node_t **array;
		item = malloc(sizeof(hash_table_t) * size);
			if (item == NULL)
				return (NULL);
	array = malloc(sizeof(hash_node_t) * size);
		if (array == NULL)
			return (NULL);
	for (a = 0; a <= size; ++a)
	{
		array[a] = NULL;
		if (array[a] != NULL)
		{
			free(array);
		}
	}
	item->array = array;
	item->size = size;
	return (item);
	free(item);
}