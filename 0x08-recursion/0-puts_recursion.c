#include "main.h"
/**
 * _puts_recursion - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar('\n');
else if (*s != '\0')
{
_putchar(*s);
s++;
_puts_recursion(s);
}
}
