#include "main.h"
#include <stdlib.h>
/**
 * create_array - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @size: 'size' is int recieved from another function
 * @c: 'c' is a char fron another function
 *
 * Return: 0 on success
 */

char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if (size > 0)
{
ptr = (char *)malloc(size * sizeof(char));
if (ptr == 0)
return (NULL);
else
{
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
}
else
return (NULL);
}
