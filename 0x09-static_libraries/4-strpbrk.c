#include "main.h"
/**
 * _strpbrk - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * @accept: 'n' is an integer
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i, x;
for (i = 0; s[i] != 0; i++)
{
for (x = 0; accept[x] != 0; x++)
{
if (s[i] == accept[x])
{
return (s + i);
}
}
}
return ('\0');
}
