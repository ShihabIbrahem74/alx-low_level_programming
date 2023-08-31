#include "main.h"
#include <stdio.h>
/**
 * get_endianness - function for 0x014 bit project
 * Description: function for 0x14 bit project
 * Return: 0 always
*/
int get_endianness(void)
{
	unsigned long int index = 1;
	char *buffer = (char *)&index;

	if (*buffer + '0' == '1')
	return (1);
	else
	return (0);
}
