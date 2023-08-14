#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - defines a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a struct of three members
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
