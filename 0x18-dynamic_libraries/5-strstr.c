#include "main.h"
/**
 * _strstr - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @haystack: '*s' is a pointer
 *
 * @needle: 'n' is an integer
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
int h, n;
int temp;
for (h = 0; haystack[h] != 0; h++)
{
temp = h;
for  (n = 0; (needle[n] == haystack[temp]) && (needle[n] != '\0'); n++)
{
temp++;
}
if (needle[n] == '\0')
return (haystack + h);
}
return ('\0');
}
