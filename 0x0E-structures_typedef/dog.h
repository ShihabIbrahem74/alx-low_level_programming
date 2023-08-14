#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a struct of three members
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
