#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @dest: '*a' is a pointer
 *
 * @src: '*src' is a pointer
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int len = 0;
while (src[len] != 0)
{
dest[len] = src[len];
len++;
}
dest[len] = src[len];
return (dest);
}
