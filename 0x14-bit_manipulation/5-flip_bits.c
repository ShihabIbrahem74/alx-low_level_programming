#include "main.h"
#include <stdio.h>
/**
 * flip_bits - function for 0x014 bit project
 * Description: function for 0x14 bit project
 * @n: an argument
 * @m: an argument
 * Return: 0 always
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 64;
	unsigned int counter = 0;
	unsigned long int one = 1;

	n = n ^ m;
	while (bits > 0)
	{
		bits--;
		if (n & (one << bits))
		counter++;
	}
	return (counter);
}
