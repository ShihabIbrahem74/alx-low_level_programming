#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - function for 0x014 bit project
 * Description: function for 0x14 bit project
 * @b: an argument
 * Return: 0 always
*/
unsigned int binary_to_uint(const char *b)
{
	int counter = 0;

	if (!b)
	return (0);

	while (*b)
	{
		if (*b == 48 || *b == 49)
		{
			counter = counter * 2 + (*b - 48);
			b++;
		}
		else
		return (0);
	}
	return (counter);

}
