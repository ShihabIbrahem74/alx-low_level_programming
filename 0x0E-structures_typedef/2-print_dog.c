#include "dog.h"

/**
 * print_dog - checks if a character is a digit
 *
 * @d: struct parameter
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
