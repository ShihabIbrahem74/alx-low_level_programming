#include "main.h"
/**
 * _strchr - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * @c: 'n' is an integer
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != 0)
{
if (s[i] == c)
return (s + i);
i++;
}
if (s[i] == c)
	return (s + i);
return (NULL);
}
