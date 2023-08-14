#include "dog.h"

/**
 * init_dog - checks if a character is a digit
 *
 * @d: struct parameter
 * @name: char parameter
 * @age: float parameter
 * @owner: char parameter
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
