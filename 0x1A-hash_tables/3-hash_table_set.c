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
	char *new_value;
	hash_node_t *new_node;
	hash_node_t *searcher;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % (ht->size);
	searcher = ht->array[index];
	while (searcher != NULL)
	{
		if (strcmp(searcher->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(searcher->value);
			searcher->value = new_value;
			return (1);
		}
		searcher = searcher->next;
	}
	new_node = node_maker(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (0);

}
/**
 * node_maker - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @key: an argument
 * @value: an argument
 * Return: 0 always
*/
hash_node_t *node_maker(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
