#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @str: 'size' is int recieved from another function
 *
 * Return: 0 on success
 */

char *_strdup(char *str)
{
char *ptr;
int i;
int size = 0;

if (str == NULL)
return (NULL);

while (str[size] != '\0')
size++;

ptr = (char *)malloc((size + 1) * sizeof(char));

if (ptr != NULL)
{
for (i = 0; i <= size; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
else
return (NULL);
}
