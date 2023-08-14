#include "dog.h"
#include <stdlib.h>
/**
 * *_strcpy - fucntion that is mintioned in another code
 *
 * Description: function to do task for alx
 *
 * @dest: '*a' is a pointer
 *
 * @src: '*src' is a pointer
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int len = 0;
while (src[len] != 0)
{
dest[len] = src[len];
len++;
}
dest[len] = src[len];
return (dest);
}
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
 * new_dog - checks if a character is a digit
 *
 * @name: struct parameter
 * @age: struct parameter
 * @owner: struct parameter
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
{
free(ptr);
return (NULL);
}
ptr->name = malloc((sizeof(char) * _strlen(name)) + 1);
if (ptr->name == NULL)
{
free(ptr->name);
free(ptr);
return (NULL);
}
ptr->owner = malloc((sizeof(char) * _strlen(owner)) + 1);
if (ptr->owner == NULL)
{
free(ptr->owner);
free(ptr->name);
free(ptr);
return (NULL);
}
_strcpy(ptr->name, name);
_strcpy(ptr->owner, owner);
ptr->age = age;

return (ptr);
}
