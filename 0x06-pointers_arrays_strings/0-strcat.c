#include "main.h"
/**
 * _strcat - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @dest: '*dest' is a pointer
 *
 * @src: '*src' is a pointer
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int length1 = 0;
int length2 = 0;

while (dest[length1] != 0)
length1++;
while (src[length2] != 0)
{
dest[length1] = src[length2];
length1++;
length2++;
}
return (dest);
}
