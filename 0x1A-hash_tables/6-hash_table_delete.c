#include "hash_tables.h"
/**
 * hash_table_delete - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * Return: 0 always
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *searcher;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			searcher = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = searcher;
		}
	}
	free(ht->array);
	free(ht);
}
