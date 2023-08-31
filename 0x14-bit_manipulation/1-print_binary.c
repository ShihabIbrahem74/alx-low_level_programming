#include "main.h"
#include <stdio.h>
/**
 * print_binary - function for 0x014 bit project
 * Description: function for 0x14 bit project
 * @n: an argument
 * Return: 0 always
*/
void print_binary(unsigned long int n)
{
	unsigned long int bits = (sizeof(n) * 8);
	unsigned long int one = 1;
	int flag = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}

	while (bits > 0)
	{
		bits--;
		if (n & one << bits)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
			_putchar('0');

	}
}
