#include "hash_tables.h"
/**
 * hash_table_print - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @ht: an argument
 * Return: 0 always
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *searcher;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		searcher = ht->array[i];
		while (searcher != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", searcher->key, searcher->value);
			flag = 1;
			searcher = searcher->next;
		}
	}
	printf("}\n");
}
