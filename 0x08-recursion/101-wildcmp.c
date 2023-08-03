#include "main.h"

/**
 * wildcmp - funtion for alx advanced task
 *
 * @s1: '*s1' is a pointer
 * @s2: '*s1' is a pointer
 *
 * Return: always 1
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

else if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));

else if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));

else
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
return (0);
}
