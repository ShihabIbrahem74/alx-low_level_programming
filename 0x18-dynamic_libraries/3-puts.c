#include "main.h"

/**
 * _puts - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*str' is a pointer
 *
 * Return: Always 0.
 */

void _puts(char *s)
{
int i = 0;
while (s[i] != 0)
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
