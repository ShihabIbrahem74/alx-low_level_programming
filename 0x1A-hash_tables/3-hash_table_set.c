#include "hash_tables.h"
/**
 * hash_table_set - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * @key: an argument
 * @value: an argument
 * Return: 0 always
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *temp_key = strdup(key);
	char *temp_value = strdup(value);

	if (!temp_key || temp_value)
		return (0);

	if (!ht || !key)
		return (0);

	index = hash_djb2((const unsigned char *)temp_key) % ht->size;
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->next = NULL;

	if (ht->array[index])
	{
		new_node->next = ht->array[index];
	}
	new_node->key = temp_key;
	new_node->value = temp_value;
	ht->array[index] = new_node;

	free(temp_key);
	free(temp_value);
	return (1);
}
