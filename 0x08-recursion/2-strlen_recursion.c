#include "main.h"
/**
 * _strlen_recursion - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
int i;
if (*s != '\0')
{

i = _strlen_recursion(s + 1);
i++;
return (i);
}
else
{
i = 0;
return (i);
}
}
