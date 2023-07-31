#include "main.h"
/**
 * _memset - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * @b: '*b' is a pointer
 *
 * @n: 'n' is an integer
 *
 * Return: Always 0.
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
