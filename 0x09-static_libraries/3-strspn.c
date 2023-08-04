#include "main.h"
/**
 * _strspn - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * @accept: 'n' is an integer
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
int i, x = 0;
for (i = 0; s[i] != 0; i++)
{
for (x = 0; accept[x] != s[i]; x++)
{
if (accept[x] == 0)
return (i);
}
}
return (i);
}
