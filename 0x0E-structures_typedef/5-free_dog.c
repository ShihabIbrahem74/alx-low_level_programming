#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - checks if a character is a digit
 *
 * @d: struct parameter
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
if (d)
{
if (d->name)
free(d->name);
if (d->owner)
free(d->owner);
free(d);
}
}
