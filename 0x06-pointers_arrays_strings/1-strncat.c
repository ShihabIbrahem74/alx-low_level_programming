#include "main.h"
/**
 * _strncat - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @dest: '*dest' is a pointer
 * @n: 'n' is an integer
 * @src: '*src' is a pointer
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int length1 = 0;
int length2 = 0;

while (dest[length1] != 0)
length1++;
while (src[length2] != 0 && length2 < n)
{
dest[length1] = src[length2];
length1++;
length2++;
}
return (dest);
}
