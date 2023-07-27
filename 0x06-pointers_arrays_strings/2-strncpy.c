#include "main.h"
/**
 * _strncpy - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @dest: '*dest' is a pointer
 * @n: 'n' is an integer
 * @src: '*src' is a pointer
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
int destl = 0;
int scrl = 0;

while (scrl <= n && src[scrl] != 0)
{
dest[destl] = src[scrl];
scrl++;
destl++;
}
while (scrl <= n)
{
dest[scrl] = '\0';
scrl++;
}
return (dest);
}
