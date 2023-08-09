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
 * argstostr - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @ac: '*s1' is a pointer recieved from another function
 * @av: '*s2' is a pointer recieved from another function
 *
 * Return: 0 on success
 */

char *argstostr(int ac, char **av)
{
char *ptr;
int size = 0;
int i, j, flag = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++, size++)
size += _strlen(av[i]);

ptr = (char *)malloc(1 + size *sizeof(char));
if (ptr == 0)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, flag++)
ptr[flag] = av[i][j];

ptr[flag] = '\n';
flag++;
}
ptr[flag] = '\0';
return (ptr);
}
