#include "main.h"
#include <stdio.h>
/**
 * get_bit - function for 0x014 bit project
 * Description: function for 0x14 bit project
 * @n: an argument
 * @index: an argument
 * Return: 0 always
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	return (-1);

	bit = n >> index & 1;
	return (bit);
}
