#include "main.h"
#include <stdlib.h>

/**
 * array_range - function is called ny another file called main.c
 *
 * Description: for alx project malloc
 *
 * @min: 'size' is int recieved from another function
 * @max: 'size' is int recieved from another function
 *
 * Return: 0 on success
 */

int *array_range(int min, int max)
{
int size, *ptr;
int i;

if (min > max)
return (NULL);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
ptr[i] = min + i;
return (ptr);
}
