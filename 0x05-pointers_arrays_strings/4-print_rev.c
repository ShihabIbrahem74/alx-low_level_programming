#include "main.h"
#include <stdio.h>

/**
 * print_rev - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*str' is a pointer
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
int len = 0;
while (s[len] != 0)
len++;
len--;
while (s[len] != 0)
{
_putchar(s[len]);
len--;
}
_putchar('\n');
}
