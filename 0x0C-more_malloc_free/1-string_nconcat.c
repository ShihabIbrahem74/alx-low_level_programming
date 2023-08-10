#include "main.h"
#include <stdlib.h>

/**
 * _strlen - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @s: '*s' is a pointer
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int len = 0;
while (s[len] != 0)
len++;
return (len);
}
/**
 * string_nconcat - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @s1: 'size' is int recieved from another function
 * @s2: 'size' is int recieved from another function
 * @n: 'size' is int recieved from another function
 *
 * Return: 0 on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int i, j;
char *ptr;
unsigned int len1, len2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = (unsigned int)_strlen(s1);
len2 = (unsigned int)_strlen(s2);
if (n >= len2)
n = len2;

ptr = malloc(sizeof(char) * (len1 + n + 1));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}

for (i = 0; i < (int)len1; i++)
ptr[i] = s1[i];
for (j = 0; j < (int)n; j++)
ptr[i + j] = s2[j];
ptr[i + j] = '\0';
return (ptr);
}
