#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @b: 'size' is int recieved from another function
 *
 * Return: 0 on success
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
