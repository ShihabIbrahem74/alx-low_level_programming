#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @nmemb: 'size' is int recieved from another function
 * @size: 'size' is int recieved from another function
 *
 * Return: 0 on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);

nmemb = nmemb *size;
while (nmemb--)
ptr[nmemb] = 0;
return (ptr);
}
