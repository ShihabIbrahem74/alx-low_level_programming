#include "hash_tables.h"
/**
 * hash_djb2 - for alx task 0x1A. C - Hash tables
 * Description: for alx task 0
 * @str: an argument
 * Return: 0 always
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
