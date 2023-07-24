#include "main.h"
#include <stdio.h>

/**
 * puts_half - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @str: '*str' is a pointer
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
int rem;
int len = 0;
while (str[len] != 0)
len++;
len--;
if (len % 2 != 0)
rem = (len - 1) / 2;
else
rem = len / 2;
while (rem < len)
{
_putchar(str[rem + 1]);
rem++;
}
_putchar('\n');
}
