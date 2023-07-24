#include "main.h"
#include <stdio.h>

/**
 * puts2 - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @str: '*str' is a pointer
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
int len = 0;
while (str[len] != 0)
{
if (len % 2 == 0)
_putchar(str[len]);
len++;
}
_putchar('\n');
}
