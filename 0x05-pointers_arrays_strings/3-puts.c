#include "main.h"
#include <stdio.h>

/**
 * _puts - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @str: '*str' is a pointer
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != 0)
{
i++;
_putchar(str[i]);
}
_putchar('\n');
}
