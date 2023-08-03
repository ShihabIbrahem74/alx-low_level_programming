#include "main.h"
int _strlen_recursion(char *s);
int pali(char *strt, char *end);

/**
 * is_palindrome - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
int length;
char *end = s;
int i;
length = _strlen_recursion(s);
i = pali(s, end + (length - 1));
return (i);
}

/**
 * pali - fucntion that is mintioned in another code
 *
 * Description: function to return the value
 *
 * @strt: '*strt' is a pointer
 *
 * @end: '*end' is a pointer
 *
 * Return: Always 0.
 */

int pali(char *strt, char *end)
{
int i;
if (strt >= end)
return (1);
else
{
if (*strt != *end)
return (0);
else
{
i = pali(strt + 1, end - 1);
return (i);
}
}
}

/**
 * _strlen_recursion - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
int i;

if (*s != '\0')
{
i = _strlen_recursion(s + 1);
i++;
return (i);
}
else
{
i = 0;
return (i);
}
}
