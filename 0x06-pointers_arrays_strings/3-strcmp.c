#include "main.h"
/**
 * _strcmp - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s1: '*s1' is a pointer
 * @s2: '*s2' is a pointer
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
int x = 0;
int y = 0;

while (*s1 && *s2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 - *s2);
}
