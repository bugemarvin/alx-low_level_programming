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
	unsigned long int a = 0;
	hash_table_t *item = malloc(sizeof(hash_table_t) * size);
	hash_node_t **array = malloc(sizeof(hash_node_t) * size);

	if (item == NULL || array == NULL)
		return (NULL);
	while (a < size)
	{
		array[a] = NULL;
		++a;
	}
	item->array = array;
	item->size = size;
	return (item);
}
