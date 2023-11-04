#include "hash_tables.h"
/**
 * hash_table_get - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * @key: an argument
 * Return: 0 always
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *searcher;

	if (ht == NULL || ht->array == NULL || ht->array == 0 ||
	key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	searcher = ht->array[index];
	while (searcher != NULL)
	{
		if (strcmp(searcher->key, key) == 0)
		{
			return (searcher->value);
		}
		searcher = searcher->next;
	}
	return (NULL);
}
