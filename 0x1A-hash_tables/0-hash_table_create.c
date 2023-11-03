#include "hash_tables.h"
/**
 * hash_table_create - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @size: an argument
 * Return: 0 always
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **new_array;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new_array = malloc(sizeof(hash_node_t) * size);
	if (!new_array)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		new_array[i] = NULL;
	}

	new->size = size;
	new->array = new_array;

	return (new);

}
