#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @ptr: 'size' is int recieved from another function
 * @old_size: 'size' is int recieved from another function
 * @new_size: 'size' is int recieved from another function
 *
 * Return: 0 on success
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *temp;
int i;

if (old_size == new_size)
return (ptr);
if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
temp = malloc(new_size);
if (temp == NULL)
{
free(temp);
return (NULL);
}
for (i = 0; (unsigned int)i < (old_size < new_size ? old_size : new_size); i++)
((char *)temp)[i] = ((char *)ptr)[i];
free(ptr);
return (temp);
}
