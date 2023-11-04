#include "hash_tables.h"
/**
 * shash_table_create - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @size: an argument
 * Return: 0 always
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	shash_node_t **new_array;
	unsigned long int i;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);

	new_array = malloc(sizeof(shash_node_t *) * size);
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
	new->shead = NULL;
	new->stail = NULL;
	new->array = new_array;

	return (new);
}

/**
 * shash_table_set - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * @key: an argument
 * @value: an argument
 * Return: 0 always
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *new_value;
	shash_node_t *new_node;
	shash_node_t *searcher;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
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
	new_node = snode_maker(key, value);
	if (!new_node)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	add_to_shash(ht, new_node);
	return (1);
}

/**
 * snode_maker - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @key: an argument
 * @value: an argument
 * Return: 0 always
*/
shash_node_t *snode_maker(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
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
	node->snext = NULL;
	node->sprev = NULL;
	return (node);
}

/**
 * add_to_shash - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * @new_node: an argument
 * Return: 0 always
*/
void add_to_shash(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *tmp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = new_node;
		return;
	}
	tmp = ht->shead;
	while (tmp != NULL)
	{
		if (strcmp(new_node->key, tmp->key) < 0)
		{
			new_node->snext = tmp;
			new_node->sprev = tmp->sprev;
			tmp->sprev = new_node;
			if (new_node->sprev != NULL)
				new_node->sprev->snext = new_node;
			else
				ht->shead = new_node;
			return;
		}
		tmp = tmp->snext;
	}
	new_node->sprev = ht->stail;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_print - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * Return: 0 always
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *searcher;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	searcher = ht->shead;
	while (searcher != NULL)
	{
		if (flag == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", searcher->key, searcher->value);
		flag = 1;
		searcher = searcher->snext;
	}
	printf("}\n");
}

/**
 * shash_table_get - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * @key: an argument
 * Return: 0 always
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *searcher;

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

/**
 * shash_table_print_rev - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * Return: 0 always
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *searcher;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	searcher = ht->stail;
	while (searcher != NULL)
	{
		if (flag == 1)
		{
			printf(", ");
		}
		printf("'%s': '%s'", searcher->key, searcher->value);
		flag = 1;
		searcher = searcher->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * Return: 0 always
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *searcher;

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
