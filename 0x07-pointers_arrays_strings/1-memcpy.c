#include "main.h"
/**
 * _memcpy - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @dest: '*s' is a pointer
 *
 * @src: '*b' is a pointer
 *
 * @n: 'n' is an integer
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
