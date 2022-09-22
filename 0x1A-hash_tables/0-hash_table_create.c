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
		item = malloc(sizeof(hash_table_t) * size);
            if (item == NULL)
                return (NULL);
	    item->size = size;
	    hash_node_t **array = malloc(sizeof(hash_node_t *) * size);

        for (a = 0; a <= size; ++a)
	    {
		        array[a] = NULL;
	    }
	    item->array = size;
	    return (item);
}
