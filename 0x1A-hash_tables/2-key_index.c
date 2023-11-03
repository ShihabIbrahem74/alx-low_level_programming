#include "hash_tables.h"
/**
 * key_index - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @key: an argument
 * @size: an argument
 * Return: 0 always
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hash;

	if (!key)
		exit(EXIT_FAILURE);

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
