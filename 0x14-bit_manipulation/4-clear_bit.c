#include "main.h"
#include <stdio.h>
/**
 * clear_bit - function for 0x014 bit project
 * Description: function for 0x14 bit project
 * @n: an argument
 * @index: an argument
 * Return: 0 always
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
